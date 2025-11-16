// 函数: __onexit_nolock
// 地址: 0x10002df2
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t ecx
int32_t var_8 = ecx
int32_t eax = DecodePointer(data_1001c590)
int32_t* ebx = DecodePointer(data_1001c58c)

if (ebx u>= eax)
    void* edi_2 = ebx - eax
    
    if (edi_2 + 4 u>= 4)
        uint32_t eax_3 = __msize(eax)
        
        if (eax_3 u>= edi_2 + 4)
            goto label_10002e8e
        
        uint32_t eax_5 = 0x800
        
        if (eax_3 u< 0x800)
            eax_5 = eax_3
        
        uint32_t eax_6 = eax_5 + eax_3
        int32_t eax_7
        
        if (eax_6 u>= eax_3)
            eax_7 = sub_100042a1(eax, eax_6)
        
        if (eax_6 u>= eax_3 && eax_7 != 0)
        label_10002e74:
            ebx = eax_7 + (edi_2 s>> 2 << 2)
            data_1001c590 = EncodePointer(eax_7)
        label_10002e8e:
            *ebx = EncodePointer(arg1)
            data_1001c58c = EncodePointer(&ebx[1])
            return arg1
        
        if (eax_3 + 0x10 u>= eax_3)
            eax_7 = sub_100042a1(eax, eax_3 + 0x10)
            
            if (eax_7 != 0)
                goto label_10002e74

return 0
