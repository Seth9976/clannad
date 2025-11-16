// 函数: sub_6b38d0
// 地址: 0x6b38d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1[0xd]
*arg1 = &std::streambuf::`vftable'

if (edi != 0)
    int32_t* ecx = *edi
    
    if (ecx != 0)
        int32_t* eax_2 = (*(*ecx + 8))()
        
        if (eax_2 != 0)
            (**eax_2)(1)
    
    j__free(edi)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
