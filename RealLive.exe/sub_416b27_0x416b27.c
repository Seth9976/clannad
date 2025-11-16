// 函数: sub_416b27
// 地址: 0x416b27
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*(arg4 + 0x354ae3a8)
void* entry_ebx
*(entry_ebx - 0x7f)
*arg2
void* var_2 = arg4
void** esp = &var_2
*(arg3 - 0x4274e032)
bool c = test_bit(arg1:1.b, 0)
int32_t eax_2
bool c_3

if (arg3 == 0)
    int32_t temp1_1 = *(arg3 + (arg1 << 2) + 0x552adc15)
    *(arg3 + (arg1 << 2) + 0x552adc15) = adc.d(temp1_1, 0xffffff8c, c)
    c_3 =
        adc.d(temp1_1, 0xffffff8c, c) u< temp1_1 || (c && adc.d(temp1_1, 0xffffff8c, c) == temp1_1)
label_416b96:
    void* edi_3 = *(arg4 + 0x354ae244)
    int32_t temp3_1 = *(edi_3 + 0x2adc1581)
    *(edi_3 + 0x2adc1581) = adc.d(temp3_1, 0x55, c_3)
    bool c_4 = adc.d(temp3_1, 0x55, c_3) u< temp3_1 || (c_3 && adc.d(temp3_1, 0x55, c_3) == temp3_1)
    int32_t eflags
    __out_dx_oeax(arg2.w, arg1, eflags)
    int32_t temp4_1 = *(arg1 + 0x2adc1581)
    *(arg1 + 0x2adc1581) = adc.d(temp4_1, 0x55, c_4)
    arg3 = *(arg3 - 0x4274e032)
    arg2.b = sbb.b(arg2.b, arg1:1.b, 
        adc.d(temp4_1, 0x55, c_4) u< temp4_1 || (c_4 && adc.d(temp4_1, 0x55, c_4) == temp4_1))
    arg2 -= 1
    eax_2 = adc.d(arg1 ^ 0x814683f3, 0x95552adc, false)
    esp[1].w
    esp += 6
    void* edi_4 = *(arg4 + 0x354ae20e)
    *(edi_4 - 0x7f) += 0x15
else
    int32_t temp6_1 = arg1 ^ 0x817c83f3
    *esp
    esp += 2
    *(arg4 + 0x354ae38c)
    *(arg3 + 0x2adc1581) =
        adc.d(*(arg3 + 0x2adc1581), 0x55, adc.d(temp6_1, 0x82552adc, false) u< temp6_1)
    *(arg3 - 0x4274e032)
    arg2 -= 1
    int32_t eax_1 = adc.d(temp6_1, 0x82552adc, false) ^ 0x815e83f3
    eax_2 = adc.d(eax_1, 0x80552adc, false)
    void* esi_1 = arg3
    *esp
    void* edi_2 = *(arg4 + 0x354ae260)
    *(entry_ebx + 0x2adc1581) =
        adc.d(*(entry_ebx + 0x2adc1581), 0x55, adc.d(eax_1, 0x80552adc, false) u< eax_1)
    arg3.b = *(arg3 - 0x4274e032)
    *(esp - 2) = esi_1
    esp -= 2
    arg3 -= 1
    
    if (arg3 == 0)
        int32_t eax_3 = eax_2 ^ 0x819483f3
        arg1 = adc.d(eax_3, 0x8c552adc, false)
        c_3 = adc.d(eax_3, 0x8c552adc, false) u< eax_3
        goto label_416b96
    
    *(edi_2 - 0x7f) += 0x15
*arg2
*(esp - 4) = arg4
*(arg3 + ((esp - 4) << 2) + 0x15) -= 0x24
arg2.b -= *(arg4 - 0x7f)
*(esp - 0x83) -= 0x15
*arg2
*eax_2 = arg4
arg2.b <<= 1
void* eax_7 = adc.d((esp - 4) ^ 0x814983f3, 0x8e552adc, false)
*(eax_7 - 0x7f) |= 0x15
*(arg2 - 1)
*(eax_2 - 2) = arg4
*(entry_ebx + 0x2adc1581) += 0x55
*(arg3 - 0x4274e032 + (entry_ebx << 2) + 0x552adc15) -= 0x6f
*(eax_2 + 2)
*(arg4 + 0x354ae288)
*(arg3 - 0x4274e0b1)
*(arg2 - 1)
*eax_2 = arg4
trap(0xd)
