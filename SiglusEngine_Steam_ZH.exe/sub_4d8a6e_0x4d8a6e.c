// 函数: sub_4d8a6e
// 地址: 0x4d8a6e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg1[0x40]
int32_t* ecx = eax[4]
int32_t edi
int32_t var_24 = edi
int32_t edi_2 = *eax & 0xfffff
int32_t* var_8 = ecx

if (arg1[0x22] == *(*(arg1[5] + (*ecx << 2)) + 4))
    goto label_4d8add

void var_18
int32_t result = (*(*arg1 + 0x80))(arg1[0x3f], &var_18, edi_2, 0, 0)

if (result s>= 0)
    var_8 = &var_18
    ecx = &var_18
label_4d8add:
    result =
        sub_4d75f7(arg1, 0x24, ecx, edi_2, *(arg1[0x40] + 8), nullptr, nullptr, edi_2, 0, 0, 0, 0)
    
    if (result s>= 0)
        if (var_8 != &var_18)
            return 0
        
        result = sub_4d75f7(arg1, 1, *(arg1[0x40] + 0x10), edi_2, &var_18, nullptr, nullptr, edi_2, 
            0, 0, 0, 0)
        
        if (result s>= 0)
            return 0

return result
