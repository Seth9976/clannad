// 函数: sub_47fcd9
// 地址: 0x47fcd9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t var_c = arg1
uint32_t eax = sub_47e0d9(arg2)
char* eax_1 = arg2
void* ecx = &eax_1[1]
char i

do
    i = *eax_1
    eax_1 = &eax_1[1]
while (i != 0)
int32_t eax_3 = sub_745f3f(eax_1 - ecx + 1)

if (eax_3 != 0)
    int32_t edi
    int32_t var_18_1 = edi
    int32_t esi_2
    int32_t edi_2
    edi_2, esi_2 = __builtin_memcpy(eax_3, arg2, (eax_1 - ecx + 1) u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_2, (eax_1 - ecx + 1) & 3)
    int32_t* eax_5 = sub_745f3f(0x24)
    int32_t* eax_6
    
    if (eax_5 == 0)
        eax_6 = nullptr
    else
        eax_6 = sub_47f934(eax_5, eax_3, arg3, arg4, *(arg1 + (eax << 2)))
    
    if (eax_6 != 0)
        *(arg1 + (eax << 2)) = eax_6
        return 0

return 0x8007000e
