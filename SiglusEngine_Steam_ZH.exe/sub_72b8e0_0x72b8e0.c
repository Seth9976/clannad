// 函数: sub_72b8e0
// 地址: 0x72b8e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x65] != 0)
label_72b906:
    int32_t ecx_2 = *(arg1[0x6b] + 0x10)
    
    if (arg1[0x65] == ecx_2 + 0xd0)
        *(*arg1 + 0x14) = 0x64
        *(*arg1 + 0x18) = *(arg1[0x6b] + 0x10)
        (*(*arg1 + 4))(arg1, 3)
        arg1[0x65] = 0
    label_72b958:
        void* ecx_4 = arg1[0x6b]
        *(ecx_4 + 0x10) = (*(ecx_4 + 0x10) + 1) & 7
        int32_t result
        result.b = 1
        return result
    
    if ((*(arg1[6] + 0x14))(arg1, ecx_2) != 0)
        goto label_72b958
else if (sub_72b400(arg1) != 0)
    goto label_72b906

return 0
