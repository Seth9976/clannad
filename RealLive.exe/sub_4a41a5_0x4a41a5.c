// 函数: sub_4a41a5
// 地址: 0x4a41a5
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t var_1
int32_t* esp = &var_1
TEB* fsbase
*(fsbase + arg5 - 0x69) u>>= 1
bool c = *arg4 u< *arg5
void* esi = &arg4[1]
void* edi = &arg5[1]
int32_t temp4 = *(arg3 + 0x2240d7d2)
int32_t* result = adc.d(arg1, temp4, c)

if (adc.d(arg1, temp4, c) != 0 && adc.d(arg1, temp4, c) u>= arg1
        && (not(c) || adc.d(arg1, temp4, c) != arg1))
    return result

int32_t temp0_2

do
    result.b -= 0xb
    arg3 += 1
    void* edi_1 = arg2
    arg2 = edi
    int32_t entry_ebx
    edi = edi_1 | entry_ebx
    temp0_2 = *esp
    esp = &esp[1]
while (not(test_bit(temp0_2, 0xb)))
*(esp - 4) = esi
*(esp - 8) = esi
result.b = 0xf8
int32_t eflags
uint16_t temp0_3
temp0_3, eflags = __arpl_gpr16_gpr16(result.w, arg2.w)
result.w = temp0_3
void* eax = edi
bool c_2 = *__outsd(arg2.w, *esi, esi, eflags) u< *result
void* temp7_1
int32_t temp8_1
bool cond:1_1

do
    temp7_1 = eax
    temp8_1 = *(arg3 + 0x2240d7d2)
    cond:1_1 = c_2
    eax = adc.d(temp7_1, temp8_1, cond:1_1)
    c_2 = adc.d(temp7_1, temp8_1, cond:1_1) u< temp7_1
        || (cond:1_1 && adc.d(temp7_1, temp8_1, cond:1_1) == temp7_1)
while (adc.d(temp7_1, temp8_1, cond:1_1) == 0 || c_2)
return eax - 0x1d0000b5
