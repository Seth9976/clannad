// 函数: sub_482992
// 地址: 0x482992
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t* ecx = *(arg1 + 0x1c)

if (ecx != 0)
    if (*(arg1 + 0x2c) != 0)
        int32_t i = 0
        int32_t result = 0
        
        if (*ecx u> 0)
            do
                result = sub_4828e0(*(ecx[3] + (i << 2)), arg2, arg3, arg4, arg1)
                
                if (result != 0)
                    break
                
                ecx = *(arg1 + 0x1c)
                i += 1
            while (i u< *ecx)
        
        return result
    
    *arg3 = arg4

return 0
