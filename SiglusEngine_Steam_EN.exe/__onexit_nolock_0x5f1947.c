// 函数: __onexit_nolock
// 地址: 0x5f1947
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t eax = DecodePointer(data_20f4590)
int32_t* ebx = DecodePointer(data_20f458c)

if (ebx u>= eax)
    void* edi_2 = ebx - eax
    
    if (edi_2 + 4 u>= 4)
        uint32_t eax_3 = __msize(eax)
        
        if (eax_3 u>= edi_2 + 4)
            goto label_5f19e3
        
        uint32_t eax_5 = 0x800
        
        if (eax_3 u< 0x800)
            eax_5 = eax_3
        
        uint32_t eax_6 = eax_5 + eax_3
        int32_t eax_7
        
        if (eax_6 u>= eax_3)
            eax_7 = sub_5f6afd(eax, eax_6)
        
        if (eax_6 u>= eax_3 && eax_7 != 0)
        label_5f19c9:
            ebx = eax_7 + (edi_2 s>> 2 << 2)
            data_20f4590 = EncodePointer(eax_7)
        label_5f19e3:
            *ebx = EncodePointer(arg1)
            data_20f458c = EncodePointer(&ebx[1])
            return arg1
        
        if (eax_3 + 0x10 u>= eax_3)
            eax_7 = sub_5f6afd(eax, eax_3 + 0x10)
            
            if (eax_7 != 0)
                goto label_5f19c9

return 0
