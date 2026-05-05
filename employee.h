// 4.1 Employee класс (1, 0..1, 0..n харьцаануудыг агуулсан)
class Employee {
    string name;
    // 1 харьцаа (Aggregation)
    Division* division;          
    JobDescription* jobDesc;    
    // 0..1 харьцаа (Заагч ашиглан хориглолт хийх)
    Spouse* spouse;              
    // 0..n харьцаа (Vector ашиглан олон хүүхэд нэмэх боломжтой)
    vector<Child*> children;    
 
public:
    Employee(string n, Division* div, JobDescription* job)
        : name(n), division(div), jobDesc(job), spouse(nullptr) {}
 
    // 4.4 Spouse, Child-уудыг тохируулах функцууд
    void setSpouse(Spouse* s) {
        spouse = s;
    }
    void addChild(Child* c) {
        children.push_back(c);
    }
 
    // 4.5 Бүх мэдээллийг хэвлэх
    void printInfo() {
        cout << "Ajiltan: " << name << "\n";
        if (division) cout << "  Heltes (1): " << division->getName() << "\n";
        if (jobDesc) cout << "  Alban tushaal (1): " << jobDesc->getTitle() << "\n";
 
        if (spouse) cout << "  Ehner/Nuhur (0..1): " << spouse->getName() << "\n";
        else cout << "  Ehner/Nuhur (0..1): Baihgui\n";
 
        cout << "  Huuhduud (0..n): ";
        if (children.empty()) cout << "Baihgui";
        for (auto child : children) cout << child->getName() << " ";
        cout << "\n--------------------------\n";
    }
};