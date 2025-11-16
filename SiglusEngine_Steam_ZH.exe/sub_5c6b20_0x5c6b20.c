// 函数: sub_5c6b20
// 地址: 0x5c6b20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result_1 = arg1
char edx = (*(arg1 + 0x98)).b
void* result = nullptr
result_1 = nullptr

if ((edx & 1) != 0 && (edx & 8) != 0)
    int32_t* ecx = *(arg1 + 0x74)
    
    if (ecx != 0)
        if ((*(*ecx + 0x24))(ecx, arg2, arg3, arg4, &result_1) s< 0)
            return 0
        
        result = result_1

*arg5 = 0
return result
