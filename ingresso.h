#ifndef INGRESSO_H
#define INGRESSO_H

class Ingresso{
    protected:
        float m_valor; 
        float m_imposto;

    public:
        Ingresso(float valor_, float imposto_);
        ~Ingresso();
        float getTotal();
        float getImposto();

};

class IngressoVIP : public Ingresso{
  private:
    float m_adicional;

  public:
    IngressoVIP(float adicional_, float valor_, float imposto_);
    ~IngressoVIP();
    float getAdicional();
    
};

#endif