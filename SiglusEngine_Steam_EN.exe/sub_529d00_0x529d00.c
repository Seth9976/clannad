// 函数: sub_529d00
// 地址: 0x529d00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_1bfdd30

if (ecx u> 0x65)
    data_1b8b06c = 1
    return 

uint32_t eax = zx.d(lookup_table_52a0f0[ecx])

switch (eax)
    case 0
        int32_t eax_1 = data_1af4e84
        int32_t var_8_1
        int32_t eax_4
        
        if (eax_1 == 0)
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            eax_4 = data_1b8a734
            var_8_1 = 0xffffffff
            ecx = data_1bfdd30
        else if (eax_1 != 1)
            eax_4 = data_1b8a734
            int32_t var_8
            var_8_1 = var_8
        else
            sub_4ef190(eax_1 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            eax_4 = data_1b8a734
            var_8_1 = eax_4
            ecx = data_1bfdd30
        
        int32_t edi_1
        
        if (ecx == 0 || ecx == 1 || ecx == 7 || ecx == 0xf || ecx == 0x10 || ecx == 0x11)
            edi_1 = 1
        else
            edi_1 = 0
        
        void* esi_1 = data_1b8a720
        
        if (ecx == 0 || ecx == 1 || ecx == 7 || ecx == 8 || ecx == 9 || ecx == 0xa)
            int32_t edx_3 = data_1311178
            data_70362c = esi_1
            data_703630 = eax_4
            
            if (edx_3 == 0)
                data_703644 = esi_1
                data_703648 = eax_4
            
            if (ecx == 0 || ecx == 1 || ecx == 7)
                data_703634 = esi_1
                data_703638 = eax_4
                
                if (edx_3 == 0)
                    data_70364c = esi_1
                    data_703650 = eax_4
            else
                data_70363c = esi_1
                data_703640 = eax_4
                
                if (edx_3 == 0)
                    data_703654 = esi_1
                    data_703658 = eax_4
        
        uint32_t eax_5 = zx.d(data_70365c)
        int32_t var_18_1 = ecx
        uint32_t var_1c_1 = eax_5
        sub_4a33f0(eax_5, var_8_1, esi_1, edi_1)
        eax = data_1bfdd30
        
        if (eax == 1 || eax == 9)
            sub_529ca0(0)
            return 
        
        if (eax != 7 && eax != 0xa)
            return 
        
        sub_529ca0(1)
        return 
    case 1
        sub_529ca0(0)
        return 
    case 2
        data_715e98 = sub_49e690(0x976380, data_63e16c)
        return 
    case 3
        int32_t edx_6 = data_63e16c
        data_1af1714 = 0
        data_187c51f = 0
        data_1af1710 = 0
        data_187c51e = 0
        data_187c51d = 0
        sub_49e720(eax, edx_6, 0x976380, 0x64)
        data_1393190 = 0
        data_1af0f3c = 0xffffffff
        data_1370100 = 0xffffffff
        data_703660 = 0xffffffff
        data_1af17ac = 0
        return 
    case 4
        sub_529ca0(1)
        return 
    case 5
        data_715e98 = data_976b00
        return 
    case 6
        int32_t eax_9 = data_1af4e84
        
        if (eax_9 == 0)
            sub_4ef190(eax_9, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            sub_4a3870(data_1b8a720, 0)
            return 
        
        if (eax_9 != 1)
            return 
        
        sub_4ef190(eax_9 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        sub_4a3870(data_1b8a720, data_1b8a734)
        return 
    case 7
        int32_t eax_13 = data_1af4e84
        
        if (eax_13 == 0)
            sub_4ef190(eax_13, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            sub_4a3870(0xff, data_1b8a720)
            return 
        
        if (eax_13 != 1)
            return 
        
        sub_4a3870(0xff, 0)
        return 
    case 8
        int32_t eax_17 = data_1af4e84
        
        if (eax_17 == 0)
            sub_4ef190(eax_17, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            sub_4a3870(0, data_1b8a720)
            return 
        
        if (eax_17 != 1)
            return 
        
        sub_4a3870(0, 0)
        return 
    case 9
        int32_t eax_21 = data_1af4e84
        
        if (eax_21 == 0)
            sub_4ef190(eax_21, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            data_70365c = data_1b8a720.b
            return 
        
        if (eax_21 != 1)
            return 
        
        eax.b = data_12a2948
        data_70365c = eax.b
        return 
    case 0xa
        data_1af0f3c = 0xffffffff
        data_1370100 = 0xffffffff
        data_703660 = 0xffffffff
        return 
    case 0xb
        data_1b8b06c = 1
        return 
