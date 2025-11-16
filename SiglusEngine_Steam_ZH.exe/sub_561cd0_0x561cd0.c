// 函数: sub_561cd0
// 地址: 0x561cd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[2]
int32_t esi = arg1[1]
int32_t result = (ebx - esi) s/ 0x19b0

if (result u>= arg2)
    return result

int32_t eax_3
int32_t edx_4
edx_4:eax_3 = muls.dp.d(0x4fba3d0b, esi - *arg1)
int32_t edx_5 = edx_4 s>> 0xb
int32_t esi_4 = (edx_5 u>> 0x1f) + edx_5

if (0x9f747 - esi_4 u< arg2)
    sub_743191("vector<T> too long")
    noreturn

int32_t eax_5
int32_t edx_6
edx_6:eax_5 = muls.dp.d(0x4fba3d0b, ebx - *arg1)
void* esi_5 = esi_4 + arg2
int32_t edx_7 = edx_6 s>> 0xb
int32_t eax_8 = (edx_7 u>> 0x1f) + edx_7
uint32_t edx_9 = eax_8 u>> 1

if (0x9f747 - edx_9 u>= eax_8)
    int32_t eax_11 = eax_8 + edx_9
    
    if (eax_11 u< esi_5)
        eax_11 = esi_5
    
    return sub_561f20(arg1, eax_11) __tailcall

void* eax_9 = nullptr

if (0 u< esi_5)
    eax_9 = esi_5

return sub_561f20(arg1, eax_9) __tailcall
