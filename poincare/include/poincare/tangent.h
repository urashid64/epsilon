#ifndef POINCARE_TANGENT_H
#define POINCARE_TANGENT_H

#include <poincare/function.h>

class Tangent : public Function {
  public:
    Tangent(Expression * arg, bool clone_arg=true): Function(arg, (char*) "tan", clone_arg) {}
    float approximate(Context& context) override;
    Type type() override;
    Expression * clone() override;
};

#endif