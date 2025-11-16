// 函数: sub_5f3a52
// 地址: 0x5f3a52
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
uint32_t eax = __fileno(esi)
int32_t ecx = esi[3]

if ((ecx.b & 0x82) != 0)
    if ((ecx.b & 0x40) == 0)
        void* ebx_1 = nullptr
        
        if ((ecx.b & 1) == 0)
            goto label_5f3ab2
        
        esi[1] = 0
        
        if ((ecx.b & 0x10) == 0)
            esi[3] = ecx | 0x20
        else
            *esi = esi[2]
            esi[3] = ecx & 0xfffffffe
        label_5f3ab2:
            int32_t eax_6 = esi[3] & 0xffffffef
            esi[1] = 0
            int32_t eax_7 = eax_6 | 2
            esi[3] = eax_7
            
            if ((eax_7 & 0x10c) == 0)
                int32_t eax_8
                
                if (esi == &data_63bad0 || esi == &data_63baf0)
                    eax_8 = sub_5fcc44(eax)
                
                if ((esi != &data_63bad0 && esi != &data_63baf0) || eax_8 == 0)
                    __getbuf(esi)
            
            int32_t arg_4
            
            if ((esi[3] & 0x108) == 0)
                arg1 = 1
                ebx_1 = sub_5f998f(eax, &arg_4, 1)
            label_5f3b88:
                
                if (ebx_1 == arg1)
                    return zx.d(arg_4.b)
            else
                char* edx_1 = esi[2]
                int32_t* ecx_5 = *esi - edx_1
                arg1 = ecx_5
                *esi = &edx_1[1]
                esi[1] = esi[6] - 1
                
                if (ecx_5 s> 0)
                    ebx_1 = sub_5f998f(eax, edx_1, ecx_5)
                label_5f3b6b:
                    void* eax_11
                    eax_11.b = arg_4.b
                    *esi[2] = eax_11.b
                    goto label_5f3b88
                
                void* ecx_10
                
                if (eax == 0xffffffff || eax == 0xfffffffe)
                    ecx_10 = &data_63be30
                else
                    ecx_10 = ((eax & 0x1f) << 6) + (&data_640ff8)[eax s>> 5]
                
                if ((*(ecx_10 + 4) & 0x20) == 0)
                    goto label_5f3b6b
                
                int32_t eax_13
                int32_t edx_2
                eax_13, edx_2 = __lseeki64(eax, 0, 0, FILE_END)
                
                if ((eax_13 & edx_2) != 0xffffffff)
                    goto label_5f3b6b
            esi[3] |= 0x20
        
        return 0xffffffff
    
    *__errno() = 0x22
else
    *__errno() = 9

esi[3] |= 0x20
return 0xffffffff
