// 函数: sub_1a96fb6
// 地址: 0x1a96fb6
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* esi = data_1bfa0b4

do
    if (esi[4] != 0xffffffff)
        int32_t var_8_1 = 0
        void* edi_1 = &esi[0x804]
        BOOL eax
        
        for (int32_t j = 0x3ff000; j s>= 0; )
            if (*edi_1 == 0xf0 && VirtualFree(j + esi[4], 0x1000, MEM_DECOMMIT) != 0)
                *edi_1 = 0xffffffff
                data_1c0773c -= 1
                eax = esi[3]
                
                if (eax == 0 || eax u> edi_1)
                    esi[3] = edi_1
                
                var_8_1 += 1
                int32_t temp0_1 = arg1
                arg1 -= 1
                
                if (temp0_1 == 1)
                    break
            
            j -= 0x1000
            edi_1 -= 8
        
        int32_t* ecx_1 = esi
        esi = esi[1]
        
        if (var_8_1 != 0 && ecx_1[6] == 0xffffffff)
            eax = &ecx_1[8]
            int32_t edx_1 = 1
            
            while (*eax == 0xffffffff)
                edx_1 += 1
                eax += 8
                
                if (edx_1 s>= 0x400)
                    break
            
            if (edx_1 == 0x400)
                sub_1a96f60(ecx_1)
    
    if (esi == data_1bfa0b4)
        break
while (arg1 s> 0)
