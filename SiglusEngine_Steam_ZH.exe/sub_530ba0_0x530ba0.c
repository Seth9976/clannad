// 函数: sub_530ba0
// 地址: 0x530ba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t eax = esi[1]

if (arg2 u< eax)
    arg1 = *esi

if (arg2 u>= eax || arg1 u> arg2)
    if (eax == esi[2])
        int32_t* var_10_2 = arg1
        eax = sub_530c10(esi)
    
    int32_t* ecx_3 = esi[1]
    
    if (ecx_3 != 0)
        eax = *arg2
        *ecx_3 = eax
else
    if (eax == esi[2])
        int32_t* var_10_1 = arg1
        eax = sub_530c10(esi)
    
    int32_t* ecx_1 = esi[1]
    
    if (ecx_1 != 0)
        int32_t eax_2 = *(*esi + ((arg2 - arg1) s>> 2 << 2))
        *ecx_1 = eax_2
        esi[1] += 4
        return eax_2

esi[1] += 4
return eax
