// 函数: sub_5905b0
// 地址: 0x5905b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg1[1]
int32_t edi = arg1[2]
int32_t result = (edi - esi) s/ 0x34

if (result u>= 1)
    return result

int32_t eax_3
int32_t edx_4
edx_4:eax_3 = muls.dp.d(0x4ec4ec4f, esi - *arg1)
int32_t edx_5 = edx_4 s>> 4
int32_t esi_4 = (edx_5 u>> 0x1f) + edx_5

if (0x4ec4ec4 - esi_4 u< 1)
    sub_743191("vector<T> too long")
    noreturn

int32_t eax_5
int32_t edx_6
edx_6:eax_5 = muls.dp.d(0x4ec4ec4f, edi - *arg1)
int32_t edx_7 = edx_6 s>> 4
int32_t eax_8 = (edx_7 u>> 0x1f) + edx_7
uint32_t edx_9 = eax_8 u>> 1

if (0x4ec4ec4 - edx_9 u>= eax_8)
    int32_t eax_11 = eax_8 + edx_9
    
    if (eax_11 u< esi_4 + 1)
        eax_11 = esi_4 + 1
    
    return sub_590650(arg1, eax_11)

int32_t eax_9 = 0

if (0 u< esi_4 + 1)
    eax_9 = esi_4 + 1

return sub_590650(arg1, eax_9)
