// 函数: sub_6256d0
// 地址: 0x6256d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg2

if (i s< 0)
    arg1[1] = 0
    *arg1 = 0
    return arg1

if (i u> 0x1fffffff)
    sub_743132()
    noreturn

int32_t edi = 0
int32_t eax_5
int32_t edx

for (; i s> 0; i = (eax_5 - edx) s>> 1)
    int32_t var_10_1 = 0xb94bc4
    edi = sub_746f27(i, edi, i << 3)
    
    if (edi != 0)
        break
    
    edx:eax_5 = sx.q(i)

*arg1 = edi
arg1[1] = i
return arg1
