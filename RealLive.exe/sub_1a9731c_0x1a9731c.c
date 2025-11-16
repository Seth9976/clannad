// 函数: sub_1a9731c
// 地址: 0x1a9731c
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* ecx_1 = arg1
void* esi = ecx_1[1]
void* edi = *ecx_1
void* var_8_1 = edi
void* eax = edi
void* eax_5

if (esi u< arg3)
    void* esi_1 = esi + edi
    
    if (*esi_1 != 0)
        eax = esi_1
    
    if (eax + arg3 u>= &ecx_1[0x3e])
    label_1a973b4:
        char* esi_6 = &ecx_1[2]
        int32_t eax_4
        
        while (true)
            if (esi_6 u>= edi)
                return 0
            
            if (&esi_6[arg3] u>= &ecx_1[0x3e])
                return 0
            
            void* eax_3
            eax_3.b = *esi_6
            
            if (eax_3.b != 0)
                esi_6 = &esi_6[zx.d(eax_3.b)]
            else
                void* ebx_1 = &esi_6[1]
                eax_4 = 1
                
                while (*ebx_1 == 0)
                    ebx_1 += 1
                    eax_4 += 1
                
                if (eax_4 u>= arg3)
                    break
                
                arg2 -= eax_4
                
                if (arg2 u< arg3)
                    return 0
                
                esi_6 = ebx_1
        
        void* ebx_3 = &esi_6[arg3]
        
        if (ebx_3 u>= &ecx_1[0x3e])
            ecx_1[1] = 0
            *ecx_1 = &ecx_1[2]
        else
            *ecx_1 = ebx_3
            ecx_1[1] = eax_4 - arg3
        
        *esi_6 = arg3.b
        eax_5 = &esi_6[8]
    else
        while (true)
            void* ebx
            ebx.b = *eax
            
            if (ebx.b != 0)
                eax += zx.d(ebx.b)
            else
                ebx = eax + 1
                int32_t esi_3 = 1
                
                while (*ebx == 0)
                    ebx += 1
                    esi_3 += 1
                
                if (esi_3 u>= arg3)
                    void* ebx_2 = eax + arg3
                    
                    if (ebx_2 u>= &ecx_1[0x3e])
                        ecx_1[1] = 0
                        *ecx_1 = &ecx_1[2]
                    else
                        *ecx_1 = ebx_2
                        ecx_1[1] = esi_3 - arg3
                    
                    *eax = arg3.b
                    eax_5 = eax + 8
                    break
                
                if (eax != var_8_1)
                    arg2 -= esi_3
                    
                    if (arg2 u< arg3)
                        return 0
                else
                    ecx_1[1] = esi_3
                
                edi = var_8_1
                eax = ebx
            
            if (eax + arg3 u>= &ecx_1[0x3e])
                goto label_1a973b4
else
    *edi = arg3.b
    
    if (edi + arg3 u>= &ecx_1[0x3e])
        ecx_1[1] = 0
        *ecx_1 = &ecx_1[2]
    else
        *ecx_1 += arg3
        ecx_1[1] -= arg3
    
    eax_5 = edi + 8

return (eax_5 << 4) - ecx_1 * 0xf
