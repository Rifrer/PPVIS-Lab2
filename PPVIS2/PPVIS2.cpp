#include <string>
#include <iostream>
#include <Windows.h>


using namespace std;

namespace sweetness
{
    void flavour()
    {
        cout << "Эта еда сладкая." << endl;
    }
}

namespace saltiness
{
    void flavour()
    {
        cout << "Эта еда соленая." << endl;
    }
}
namespace saltandsugar
{
    void flavour()
    {
        cout << "Эта еда умеренно приправлена." << endl;
    }
}


class Recipes
{
public:
    void mix()
    {
        cout << "Смешайте ингредиенты." << endl;
    }

    void cut()
    {
        cout << "Порежьте ингредиенты." << endl;
    }

    virtual void peel()
    {
        cout << "Почистите ингредиенты." << endl;
    }

    virtual void wash()
    {
        cout << "Помойте ингредиенты." << endl;
    }
    virtual void bake()
    {
        cout << "Испеките." << endl;
    }
    virtual void taste()
    {
        cout << "Вкус блюда." << endl;
    }
    virtual void boil()
    {
        cout << "Сварите." << endl;
    }
    virtual void roast()
    {
        cout << "Пожарьте" << endl;
    }

    string ingredients;
private:
    int amount_of_ing;
protected:
    int self_life;


};


class cakes :public Recipes
{
public:
    void whip()
    {
        cout << "Взбейте." << endl;
    }
    void bake() override
    {
        cout << "Испеките тесто." << endl;
    }
    void taste() override
    {
        sweetness::flavour();
    }
};

class salad :public Recipes
{
public:
    void season()
    {
        cout << "Приправьте салат." << endl;
    }
    void wash() override
    {
        cout << "Помойте овощи." << endl;
    }
    void peel() override
    {
        cout << "Почистите овощи." << endl;
    }
    void taste() override
    {
        saltandsugar::flavour();
    }
};


class soups :public Recipes
{
public:
    void adding()
    {
        cout << "Добавьте ингредиенты." << endl;
    }
    void boil() override
    {
        cout << "Сварите суп." << endl;
    }
    void taste() override
    {
        saltandsugar::flavour();
    }
};

class meat :public Recipes
{
public:
    void roast()
    {
        cout << "Пожарьте мясо." << endl;
    }
    void boil() override
    {
        cout << "Сварите мясо." << endl;
    }
    void bake() override
    {
        cout << "Запеките мясо." << endl;
    }
    void taste() override
    {
        saltandsugar::flavour();
    }
};

class meatsalad :public Recipes
{
public:

    void сonsist()
    {
        cout << "Смешайте ингредиенты." << endl;
    }
    void wash() override
    {
        cout << "Сначала промойте овощи." << endl;
    }
    void peel() override
    {
        cout << "Потом почистите овощи." << endl;
    }
    void boil() override
    {
        cout << "Сварите мясо." << endl;
    }
    void taste() override
    {
        saltandsugar::flavour();
    }
};

class drinks :protected Recipes
{
public:
    void alcoholy()
    {
        cout << "Можно выбрать между алкогольным и безалкогольным." << endl;
    }

};






int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    salad Caesar;
    cout << "Цезарь:" << endl;
    Caesar.ingredients = "Состав: мясо, хлеб, салат, помидоры, яйца, лимон";
    cout << Caesar.ingredients << endl;
    Caesar.wash();
    Caesar.peel();
    Caesar.cut();
    Caesar.mix();
    Caesar.season();
    Caesar.taste();

    cout << endl;

    meat chicken;
    cout << "Куриные наггетсы:" << endl;
    chicken.ingredients = "Состав: курица, яйца, панировка, мука";
    cout << chicken.ingredients << endl;
    chicken.cut();
    chicken.roast();
    chicken.boil();
    chicken.bake();
    chicken.taste();

    cout << endl;

    cakes Napоleon;
    cout << "Торт \"Наполеон\":" << endl;
    Napоleon.ingredients = "Состав: яйца, сахар, молоко, мука, вода, соль, сахарная пудра";
    cout << Napоleon.ingredients << endl;
    Napоleon.mix();
    Napоleon.whip();
    Napоleon.bake();
    Napоleon.taste();

    cout << endl;

    soups Cabbage_soup;
    cout << "Суп из капусты:" << endl;
    Cabbage_soup.ingredients = "Состав: вода, сахар, мясо, картофель, капуста, соль, лук";
    cout << Cabbage_soup.ingredients << endl;
    Cabbage_soup.cut();
    Cabbage_soup.mix();
    Cabbage_soup.boil();
    Cabbage_soup.adding();
    Cabbage_soup.taste();

    cout << endl;

    drinks Cola_ice;
    cout << "Кола со льдом" << endl;
    Cola_ice.alcoholy();

    cout << endl;

    meatsalad olive;
    cout << "Оливье с курицой:" << endl;
    olive.ingredients = "Состав: морковь, курица, яйца, огурцы, картофель";
    olive.wash();
    olive.peel();
    olive.boil();
    olive.сonsist();
    olive.taste();
}
