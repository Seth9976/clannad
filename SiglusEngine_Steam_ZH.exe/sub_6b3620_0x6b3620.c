// 函数: sub_6b3620
// 地址: 0x6b3620
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = &std::stringbuf::`vftable'{for `std::streambuf'}
sub_6b3680(arg1)
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
