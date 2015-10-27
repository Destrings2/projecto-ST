#pragma

class Batery {
 public:
  Batery();
  virtual ~Batery();
  virtual float getCharge(int pos) = 0;
  virtual float getTotalCharge() = 0;
  virtual float setDischarge(float amount) = 0;
};

class B2Batery : public Batery {
 public:
  B2Batery(float charge[2]);
  virtual ~B2Batery();
  float getCharge(int pos);
  float getTotalCharge();
  float setDischarge(float amount);
 private:
  float charge[2];
  float prop[2];
};

float getTotalBateries(Batery **bateries, int nBateries);
