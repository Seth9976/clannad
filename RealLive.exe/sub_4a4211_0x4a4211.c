// 函数: sub_4a4211
// 地址: 0x4a4211
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

TEB* fsbase
*(fsbase + arg4 - 0x69) u>>= 1
bool c = *arg3 u< *arg4
void* esi = &arg3[1]
void* edi = &arg4[1]
int32_t temp4 = *(arg2 + 0x2240d7d2)
int32_t eax = adc.d(arg1, temp4, c)

if (adc.d(arg1, temp4, c) != 0 && adc.d(arg1, temp4, c) u>= arg1
        && (not(c) || adc.d(arg1, temp4, c) != arg1))
    return eax

bool c_3 = *esi u< *edi
int32_t temp8 = *(arg2 + 0x2240d7d2)
int32_t eax_1 = adc.d(eax, temp8, c_3)

if (adc.d(eax, temp8, c_3) != 0 && adc.d(eax, temp8, c_3) u>= eax
        && (not(c_3) || adc.d(eax, temp8, c_3) != eax))
    return eax_1

bool c_2 = *(esi + 4) u< *(edi + 4)
int32_t temp11_1
int32_t temp12_1
bool cond:2_1

do
    temp11_1 = eax_1
    temp12_1 = *(arg2 + 0x2240d7d2)
    cond:2_1 = c_2
    eax_1 = adc.d(temp11_1, temp12_1, cond:2_1)
    c_2 = adc.d(temp11_1, temp12_1, cond:2_1) u< temp11_1
        || (cond:2_1 && adc.d(temp11_1, temp12_1, cond:2_1) == temp11_1)
while (adc.d(temp11_1, temp12_1, cond:2_1) == 0 || c_2)
return eax_1 - 0x1d0000b5
