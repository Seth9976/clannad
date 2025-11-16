// 函数: sub_4829e3
// 地址: 0x4829e3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t* ecx = *(arg1 + 0x1c)
int32_t result = 0

if (ecx != 0)
    int32_t i = 0
    
    if (*ecx u> 0)
        do
            result = sub_482936(*(ecx[3] + (i << 2)), arg2, arg3, arg4, arg5, arg1)
            
            if (result != 0)
                break
            
            ecx = *(arg1 + 0x1c)
            i += 1
        while (i u< *ecx)

return result
