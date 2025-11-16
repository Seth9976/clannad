// 函数: sub_4287de
// 地址: 0x4287de
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = 0
void* var_14 = 3
void* ecx = var_14

if (arg1 u<= 0)
label_42880a:
    void* edi
    var_14 = edi
    int32_t __saved_ebp
    __builtin_memset(&(&__saved_ebp)[eax - 3], 0, (ecx - eax) << 2)
else
    do
        if (eax u>= ecx)
            goto label_428819
        
        long double x87_r7_1 = fconvert.t(*(*arg2 + (eax << 3)))
        eax += 1
        (&var_14)[eax] = fconvert.s(x87_r7_1)
    while (eax u< arg1)
    
    if (eax u< ecx)
        goto label_42880a

label_428819:
void var_10
var_14 = &var_10
*arg3 = fconvert.d(sub_4046f3(var_14))
return arg3
