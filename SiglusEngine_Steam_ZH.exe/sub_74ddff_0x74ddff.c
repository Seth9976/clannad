// 函数: sub_74ddff
// 地址: 0x74ddff
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
uint32_t eax = __fileno(esi)
int32_t ecx = esi[3]

if ((ecx.b & 0x82) != 0)
    if ((ecx.b & 0x40) == 0)
        void* ebx_1 = nullptr
        
        if ((ecx.b & 1) == 0)
            goto label_74de5f
        
        esi[1] = 0
        
        if ((ecx.b & 0x10) == 0)
            esi[3] = ecx | 0x20
        else
            *esi = esi[2]
            esi[3] = ecx & 0xfffffffe
        label_74de5f:
            int32_t eax_6 = esi[3] & 0xffffffef
            esi[1] = 0
            int32_t eax_7 = eax_6 | 2
            esi[3] = eax_7
            
            if ((eax_7 & 0x10c) == 0)
                int32_t eax_8
                
                if (esi == &data_b4c210 || esi == &data_b4c230)
                    eax_8 = sub_75bfb2(eax)
                
                if ((esi != &data_b4c210 && esi != &data_b4c230) || eax_8 == 0)
                    __getbuf(esi)
            
            int32_t arg_4
            
            if ((esi[3] & 0x108) == 0)
                arg1 = 1
                ebx_1 = sub_759401(eax, &arg_4, 1)
            label_74df35:
                
                if (ebx_1 == arg1)
                    return zx.d(arg_4.b)
            else
                char* edx_1 = esi[2]
                int32_t* ecx_5 = *esi - edx_1
                arg1 = ecx_5
                *esi = &edx_1[1]
                esi[1] = esi[6] - 1
                
                if (ecx_5 s> 0)
                    ebx_1 = sub_759401(eax, edx_1, ecx_5)
                label_74df18:
                    void* eax_11
                    eax_11.b = arg_4.b
                    *esi[2] = eax_11.b
                    goto label_74df35
                
                void* ecx_10
                
                if (eax == 0xffffffff || eax == 0xfffffffe)
                    ecx_10 = &data_b4ce70
                else
                    ecx_10 = ((eax & 0x1f) << 6) + (&data_b95720)[eax s>> 5]
                
                if ((*(ecx_10 + 4) & 0x20) == 0)
                    goto label_74df18
                
                int32_t eax_13
                int32_t edx_2
                eax_13, edx_2 = __lseeki64(eax, 0, 0, FILE_END)
                
                if ((eax_13 & edx_2) != 0xffffffff)
                    goto label_74df18
            esi[3] |= 0x20
        
        return 0xffffffff
    
    *__errno() = 0x22
else
    *__errno() = 9

esi[3] |= 0x20
return 0xffffffff
