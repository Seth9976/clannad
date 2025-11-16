// 函数: sub_4de6a0
// 地址: 0x4de6a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg1
int32_t* ebx = eax[4]
char* esi = *eax
int32_t edi
int32_t var_10 = edi
int32_t edi_1 = eax[1]

if (ebx[0x69] != 0)
label_4de74f:
    
    if (arg4 s> arg3)
        if (*(ebx[0x70] + 8) == 0)
            void* eax_11 = *ebx
            *(eax_11 + 0x14) = 0x75
            (*(eax_11 + 4))(ebx, 0xffffffff)
            *(ebx[0x70] + 8) = 1
        
        int32_t eax_14 = arg2 << (0x19 - arg3.b)
        arg3 = 0x19
        arg2 = eax_14
    label_4de796:
        eax = arg1
else if (arg3 s< 0x19)
    while (true)
        if (edi_1 == 0)
            if ((*(ebx[6] + 0xc))(ebx) == 0)
                return 0
            
            int32_t* eax_3 = ebx[6]
            esi = *eax_3
            edi_1 = eax_3[1]
        
        uint32_t eax_6 = zx.d(*esi)
        edi_1 -= 1
        esi = &esi[1]
        
        if (eax_6 == 0xff)
            uint32_t i
            
            do
                if (edi_1 == 0)
                    if ((*(ebx[6] + 0xc))(ebx) == 0)
                        return 0
                    
                    char** eax_5 = ebx[6]
                    esi = *eax_5
                    edi_1 = eax_5[1]
                
                i = zx.d(*esi)
                edi_1 -= 1
                esi = &esi[1]
            while (i == 0xff)
            
            if (i != 0)
                ebx[0x69] = i
                eax = arg1
                break
            
            eax_6 = 0xff
        
        bool cond:1_1 = arg3 + 8 s< 0x19
        arg2 = arg2 << 8 | eax_6
        arg3 += 8
        
        if (not(cond:1_1))
            goto label_4de796
    
    goto label_4de74f

eax[1] = edi_1
*eax = esi
eax[2] = arg2
eax[3] = arg3
return 1
