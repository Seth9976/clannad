// 函数: sub_484f1e
// 地址: 0x484f1e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg2
sub_484d07(ebx, *(*(arg1 + 0x1c) + 4), *(arg1 + 4), arg1 + 8)
void* ecx_3 = *(arg1 + 0x1c)
arg2 = *(arg1 + 0x38)
int32_t result = sub_482db7(ecx_3, ebx, &arg2, 1)

if (result == 0)
    int32_t edi
    int32_t var_10_1 = edi
    int32_t i = 0
    
    if (*(arg1 + 0x24) u> 0)
        do
            result = (*(**(*(arg1 + 0x30) + (i << 2)) + 0x28))(ebx)
            
            if (result != 0)
                return result
            
            i += 1
        while (i u< *(arg1 + 0x24))
    
    result = sub_484df5(ebx)

return result
