// 函数: sub_623980
// 地址: 0x623980
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t* eax = sub_5cb350(arg1 + 0x62538)

if (eax != 2 && eax != 3)
    void* ecx_1 = data_bac498
    
    if (*(ecx_1 + 2) == 0)
        void* edx_1 = data_bac484
        
        if (*(edx_1 + 0x138) != 0)
            eax = data_bac458
        
        if (*(edx_1 + 0x138) == 0 || *eax != 0x11)
            if (data_bac4a0[0x33].b == 0)
                eax = sub_660170()
                
                if (eax.b != 0)
                    char eax_7 = sub_635940()
                    
                    if (eax_7 == 0)
                        eax = sub_6b2090(data_bac4c8 + 0xf8)
                    
                    if (eax_7 != 0 || eax.b != 0)
                        sub_6600d0()
        else if (*(eax + 0x381) == 0)
            if (*(arg1 + 0x56cd0) == 0)
                void* edi_1 = data_bac4c8
                void* ebx_1 = data_bac4a0
                
                if (*(edi_1 + 0xb50) == 1)
                    *(arg1 + 0x56ce8) = 1
                
                if (*(ebx_1 + 0xcc) != 0)
                    ecx_1.b = 0
                else if (*(edx_1 + 0x138) == 0)
                    ecx_1.b = *(ecx_1 + 2) == 0
                else
                    ecx_1.b = 0
                
                if (sub_635790(eax, 0x22, ecx_1.b, 0, 0) != 0)
                    *(arg1 + 0x56ce9) = 1
                
                if (sub_6b2090(edi_1 + 0xf8) != 0)
                    sub_5d3da0(arg1 + 0x56b64)
                    edi_1 = data_bac4c8
                
                if (sub_6b20a0(edi_1 + 0xf8) != 0)
                    sub_5d3e00(arg1 + 0x56b64)
            
            char eax_4 = sub_635940()
            
            if (eax_4 == 0)
                eax = sub_635940()
            
            if (eax_4 != 0 || eax.b != 0)
                sub_660120()
                *(data_bac4a0 + 0x108) = *data_bac47c
                void* eax_6
                eax_6.b = 1
                return eax_6

eax.b = 1
return eax
