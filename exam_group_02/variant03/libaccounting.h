#pragma once

class Accounting{

    protected:
        double balance;

    public:
        Accounting();
        Accounting(double balance);
        Accounting(const Accounting &a);
        void setBalance(double balance);
        double getBalance() const;
        virtual double calculate(){};
        virtual void print_report();
};

class Costs: public Accounting{

    protected:
        double tax_consume;
    
    public:
        Costs();
        Costs(double balance, double tax_consume);
        Costs(const Costs &c);
        void setTaxConsume(double tax_consume);
        double getTaxConsume() const;
        void print_report();
};

class FixedCost: public Costs{

    private:
        double amount;
    
    public:
        FixedCost();
        FixedCost(double balance, double tax_consume, double amount);
        FixedCost(const FixedCost &fc);
        void setAmount(double amount);
        double getAmount() const;
        double calculate();
        void print_report();
};

class VariableCost: public Costs{

    private:
        double unit_cost;
        double quantity;

    public:
        VariableCost();
        VariableCost(double balance, double tax_consume, double unit_cost, double quantity);
        VariableCost(const VariableCost &vc);
        void setUnitCost(double unit_cost);
        double getUnitCost() const;
        void setQuantity(double quantity);
        double getQuantity() const;
        double calculate();
        void print_report();
};

class AdministrativeExpenses: public Accounting{

    private:
        double amount_salary;
        double amount_services;

    public:
        AdministrativeExpenses();
        AdministrativeExpenses(double balance, double amount_salary, double amount_services);
        AdministrativeExpenses(const AdministrativeExpenses &ae);
        void setAmountSalary(double amount_salary);
        double getAmountSalary() const;
        void setAmountServices(double amount_services);
        double getAmountServices() const;
        double calculate();
        void print_report();
};
