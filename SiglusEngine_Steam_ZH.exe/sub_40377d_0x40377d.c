// 函数: sub_40377d
// 地址: 0x40377d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t esi
int32_t var_5c = esi
arg1[0xe] = fconvert.s(float.t(0))
void* edi
void* var_60 = edi
int32_t* esp = &var_60
arg1[0xd] = fconvert.s(float.t(0))
arg1[0xc] = fconvert.s(float.t(0))
arg1[0xb] = fconvert.s(float.t(0))
arg1[9] = fconvert.s(float.t(0))
arg1[8] = fconvert.s(float.t(0))
arg1[7] = fconvert.s(float.t(0))
arg1[6] = fconvert.s(float.t(0))
arg1[4] = fconvert.s(float.t(0))
arg1[3] = fconvert.s(float.t(0))
arg1[2] = fconvert.s(float.t(0))
arg1[1] = fconvert.s(float.t(0))
long double x87_r7_12 = fconvert.t(arg2)
*arg1 = fconvert.s(x87_r7_12)
arg1[5] = fconvert.s(x87_r7_12)
arg1[0xa] = fconvert.s(float.t(1))
arg1[0xf] = fconvert.s(float.t(1))
long double x87_r7_15 = fconvert.t(arg4)
long double x87_r6 = fconvert.t(0f)
x87_r6 - x87_r7_15
int32_t eax
eax.w = (x87_r6 < x87_r7_15 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_15) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7_15 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x44}

if (p)
    int32_t var_64_1 = ecx
    float var_64_2 = fconvert.s(fconvert.t(arg4))
    void var_50
    void* var_68 = &var_50
    j_sub_402cf1(var_68, var_64_2)
    var_60 = &var_50
    float* var_64_3 = arg1
    var_68 = arg1
    esp = &var_68
    
    if (arg3 == 0)
        j_sub_4021aa()
    else
        arg1[0xc] = fconvert.s(fconvert.t(arg1[0xc]) - fconvert.t(*arg3))
        arg1[0xd] = fconvert.s(fconvert.t(arg1[0xd]) - fconvert.t(arg3[1]))
        j_sub_4021aa()
        arg1[0xc] = fconvert.s(fconvert.t(*arg3) + fconvert.t(arg1[0xc]))
        arg1[0xd] = fconvert.s(fconvert.t(arg1[0xd]) + fconvert.t(arg3[1]))

if (arg5 != 0)
    arg1[0xc] = fconvert.s(fconvert.t(*arg5) + fconvert.t(arg1[0xc]))
    arg1[0xd] = fconvert.s(fconvert.t(arg5[1]) + fconvert.t(arg1[0xd]))

*esp
esp[1]
return arg1
