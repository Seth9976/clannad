// 函数: sub_437fe4
// 地址: 0x437fe4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg2
int32_t ecx = *eax

if (ecx == 0)
    long double x87_r7_2
    
    if (eax[2] == 0)
        x87_r7_2 = float.t(0)
    else
        x87_r7_2 = float.t(1)
    
    *arg1 = fconvert.d(x87_r7_2)
else if (ecx == 1)
    *arg1 = fconvert.d(float.t(eax[2]))
else if (ecx == 2)
    int32_t eax_2 = eax[2]
    long double x87_r7_1 = float.t(eax_2)
    
    if (eax_2 s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4294967296.0)
    
    *arg1 = fconvert.d(x87_r7_1)
else if (ecx == 3)
    *arg1 = fconvert.d(fconvert.t(*(eax + 8)))
