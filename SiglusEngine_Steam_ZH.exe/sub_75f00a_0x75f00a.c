// 函数: sub_75f00a
// 地址: 0x75f00a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t* esi = arg5
uint32_t eax = __fileno(esi)
int32_t ecx = esi[3]

if ((ecx.b & 0x82) != 0)
    if ((ecx.b & 0x40) == 0)
        void* ebx_1 = nullptr
        
        if ((ecx.b & 1) == 0)
            goto label_75f06d
        
        esi[1] = 0
        
        if ((ecx.b & 0x10) == 0)
            esi[3] = ecx | 0x20
        else
            *esi = esi[2]
            esi[3] = ecx & 0xfffffffe
        label_75f06d:
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
            
            int16_t ecx_11
            
            if ((esi[3] & 0x108) == 0)
                var_8.w = arg4
                arg5 = 2
                ecx_11 = arg4
                ebx_1 = sub_759401(eax, &var_8, 2)
            label_75f152:
                
                if (ebx_1 == arg5)
                    return zx.d(ecx_11)
            else
                char* edx = esi[2]
                int32_t* ecx_5 = *esi - edx
                arg5 = ecx_5
                *esi = &edx[2]
                esi[1] = esi[6] - 2
                
                if (ecx_5 s> 0)
                    ebx_1 = sub_759401(eax, edx, ecx_5)
                label_75f128:
                    ecx_11 = arg4
                    *esi[2] = ecx_11
                    goto label_75f152
                
                void* ecx_10
                
                if (eax == 0xffffffff || eax == 0xfffffffe)
                    ecx_10 = &data_b4ce70
                else
                    ecx_10 = ((eax & 0x1f) << 6) + (&data_b95720)[eax s>> 5]
                
                if ((*(ecx_10 + 4) & 0x20) == 0)
                    goto label_75f128
                
                int32_t eax_15
                int32_t edx_1
                eax_15, edx_1 = __lseeki64(eax, 0, 0, FILE_END)
                
                if ((eax_15 & edx_1) != 0xffffffff)
                    goto label_75f128
            esi[3] |= 0x20
        
        return 0xffff
    
    *__errno() = 0x22
else
    *__errno() = 9

esi[3] |= 0x20
return 0xffff
