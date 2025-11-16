// 函数: sub_48b8d0
// 地址: 0x48b8d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_1311178
BOOL eax

if (ecx == 0)
    data_1af1714 = ecx
    data_187c51f = ecx.b
    data_1af1710 = ecx
    data_187c51e = ecx.b
    data_187c51d = ecx.b
    
    if (data_13132dc == ecx || data_1b1bcd8 != ecx)
        sub_49e720(eax, data_63e16c, 0x976380, 0x64)
        ecx = data_1311178
        data_1393190 = 0
    
    data_1af0f3c = 0xffffffff
    data_1370100 = 0xffffffff
    data_703660 = 0xffffffff
    data_1af17ac = 0

if (arg1 == 0xffffffff)
    int32_t edx_24 = data_702fc0
    data_715e98 = 0
    
    if (edx_24 != 0)
        int32_t esi_3 = data_13184f8
        int32_t eax_36 = 1
        
        if (esi_3 == 0)
            if (data_13184e8:8 == esi_3 && (data_704870 != esi_3 || data_70486c != esi_3))
                eax_36 = 0
            
            if (data_13184dc == 0)
                eax_36 = 0
            
            if (ecx != 0 && data_13184e8:4 == 0)
                eax_36 = 0
            
            if (data_1af174c == 0 && eax_36 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_36, data_72d6ac, data_719b6c, 0x61a5ec, "= 0 "), 
                        data_72d6ac, data_719b6c, 0x61a5ec, "= 0 "), 
                    data_72d6ac, data_719b6c, 0x61a5ec, "= 0 ")
                ecx = data_1311178
                esi_3 = data_13184f8
                edx_24 = data_702fc0
        
        if (edx_24 != 0)
            int32_t eax_39 = 1
            
            if (esi_3 == 0)
                if (data_13184e8:8 == esi_3 && (data_704870 != esi_3 || data_70486c != esi_3))
                    eax_39 = 0
                
                if (data_13184dc == 0)
                    eax_39 = 0
                
                if (ecx != 0 && data_13184e8:4 == 0)
                    eax_39 = 0
                
                if (data_1af174c == 0 && eax_39 != 0)
                    sub_55f390(
                        sub_55f1e0(sub_55ef70(eax_39, data_72d6ac, data_719b6c, 0x61a628, nullptr), 
                            data_72d6ac, data_719b6c, 0x61a628, nullptr), 
                        data_72d6ac, data_719b6c, 0x61a628, nullptr)
    
    data_1af17b4 = 0
    sub_48b7f0()
    bool cond:0_1 = data_1af1768 == 0
    data_107eff4 = 0
    data_107eff0 = 0xff
    data_107efa0 = 0xfffffffe
    data_107efa4 = 0xffffffff
    data_13701d8 = 0
    data_137010c = 1
    data_703670 = 0
    data_1372c14 = 1
    data_1af178c = 0
    data_1af1784 = 0
    
    if (not(cond:0_1))
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    eax = data_1af1788
    
    if (data_71929c == 0x11)
        eax = 1
    
    data_1af1788 = eax
else if (arg1 == 1)
    ecx.b = 0
    sub_498b50(ecx.b)
    bool cond:1_1 = data_108f2d4 != 3
    int32_t eax_7 = data_13130dc
    data_131d2ec = eax_7
    
    if (cond:1_1)
        void* ecx_20 = eax_7 * 0x2c + data_13130c0:4
        data_715e98 = *(ecx_20 + 0x1c)
        int32_t var_14_2 = *(ecx_20 + 0x24)
        int32_t var_18_1 = *(ecx_20 + 0x1c)
        sub_4c84d0(&data_7027c0, "= %d ")
        int32_t edx_16 = data_702fc0
        
        if (edx_16 != 0)
            int32_t ecx_21 = data_13184f8
            int32_t eax_23 = 1
            
            if (ecx_21 == 0)
                if (data_13184e8:8 == ecx_21 && (data_704870 != ecx_21 || data_70486c != ecx_21))
                    eax_23 = 0
                
                if (data_13184dc == 0)
                    eax_23 = 0
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_23 = 0
                
                if (data_1af174c == 0 && eax_23 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_23, data_72d6ac, data_719b6c, 0x61a5ec, &data_7027c0), 
                            data_72d6ac, data_719b6c, 0x61a5ec, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x61a5ec, &data_7027c0)
                    ecx_21 = data_13184f8
                    edx_16 = data_702fc0
            
            if (edx_16 != 0)
                int32_t eax_26 = 1
                
                if (ecx_21 == 0)
                    if (data_13184e8:8 == ecx_21
                            && (data_704870 != ecx_21 || data_70486c != ecx_21))
                        eax_26 = 0
                    
                    if (data_13184dc == 0)
                        eax_26 = 0
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        eax_26 = 0
                    
                    if (data_1af174c == 0 && eax_26 != 0)
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_26, data_72d6ac, data_719b6c, 0x61a628, nullptr), 
                                data_72d6ac, data_719b6c, 0x61a628, nullptr), 
                            data_72d6ac, data_719b6c, 0x61a628, nullptr)
        
        sub_4a1e40(1)
    else
        void* eax_11 = &(&data_8c4ac0)[data_8c4ac0.d * 3]:4
        int32_t ecx_10 = *(eax_11 + 8)
        int32_t eax_13
        
        if (ecx_10 != 0xffffffff)
            eax_13 = *(*(*(eax_11 + 4) * 0xf40 + 0x98c180) + ecx_10 * 0x7d8 + 0x7c8)
        else
            eax_13 = *(*(eax_11 + 4) * 0xca0 + 0x72dcf4)
        
        int32_t var_14_1 = eax_13
        data_715e98 = eax_13
        sub_4c84d0(&data_7027c0, "= %d")
        int32_t ecx_12 = data_702fc0
        
        if (ecx_12 != 0)
            int32_t edx_9 = data_13184f8
            int32_t eax_16 = 1
            
            if (edx_9 == 0)
                if (data_13184e8:8 == edx_9 && (data_704870 != edx_9 || data_70486c != edx_9))
                    eax_16 = 0
                
                if (data_13184dc == 0)
                    eax_16 = 0
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_16 = 0
                
                if (data_1af174c == 0 && eax_16 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_16, data_72d6ac, data_719b6c, 0x61a5ec, &data_7027c0), 
                            data_72d6ac, data_719b6c, 0x61a5ec, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x61a5ec, &data_7027c0)
                    edx_9 = data_13184f8
                    ecx_12 = data_702fc0
            
            if (ecx_12 != 0)
                int32_t eax_19 = 1
                
                if (edx_9 == 0)
                    if (data_13184e8:8 == edx_9 && (data_704870 != edx_9 || data_70486c != edx_9))
                        eax_19 = 0
                    
                    if (data_13184dc == 0)
                        eax_19 = 0
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        eax_19 = 0
                    
                    if (data_1af174c == 0 && eax_19 != 0)
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_19, data_72d6ac, data_719b6c, 0x61a628, nullptr), 
                                data_72d6ac, data_719b6c, 0x61a628, nullptr), 
                            data_72d6ac, data_719b6c, 0x61a628, nullptr)
        
        data_8c4ac0.d = 0xffffffff
    
    int32_t eax_29 = data_108f2d4
    data_1af17b4 = 0
    
    if (eax_29 == 3)
        sub_48b7f0()
        data_107eff4 = 0
        data_107eff0 = 0xff
        data_107efa0 = 0xfffffffe
        data_107efa4 = 0xffffffff
    else if (eax_29 != 2)
        if (data_703794 != 0 && data_12dc624 != 0)
            bool cond:6 = data_1af1768 == 0
            data_13701d8 = 0
            data_137010c = 1
            data_703670 = 0
            data_1372c14 = 1
            data_1af178c = 0
            data_1af1784 = 0
            
            if (not(cond:6))
                data_1af177c = 1
                data_1af1768 = 0
            
            sub_48d140()
            int32_t eax_32 = data_1af1788
            bool cond:8 = data_71929c == 0x11
            data_108f308.d = 0
            
            if (cond:8)
                eax_32 = 1
            
            data_1af1788 = eax_32
            data_108f30c = data_131310c
            data_108f310 = data_13130dc
            sub_48d120()
            data_71929c = 0x14
            data_7192a0 = 0
            data_7192e0 = 0
            return 
        
        sub_4996a0(sub_48b7f0(), &data_13130c0)
        sub_57e1c0()
    else
        void* esi_2 = data_131d2d0 * 0x10c + 0x1097fe4
        
        if (*(esi_2 + 0xfc) != 0)
            bool cond:5 = data_1af1768 == 0
            data_13701d8 = 0
            data_137010c = 1
            data_703670 = 0
            data_1372c14 = 1
            data_1af178c = 0
            data_1af1784 = 0
            
            if (not(cond:5))
                data_1af177c = 1
                data_1af1768 = 0
            
            sub_48d140()
            int32_t eax_30 = data_1af1788
            int32_t edx_23 = *(esi_2 + 0x100)
            int32_t ecx_28 = *(esi_2 + 0xfc)
            
            if (data_71929c == 0x11)
                eax_30 = 1
            
            data_1af1788 = eax_30
            sub_417040(ecx_28, edx_23)
            return 
        
        sub_4996a0(sub_48b7f0(), &data_13130c0)
    
    bool cond:3_1 = data_1af1768 == 0
    data_13701d8 = 0
    data_137010c = 1
    data_703670 = 0
    data_1372c14 = 1
    data_1af178c = 0
    data_1af1784 = 0
    
    if (not(cond:3_1))
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    
    if (data_71929c == 0x11)
        data_1af1788 = 1
else if (arg1 == 2)
    ecx.b = 0
    sub_498b50(ecx.b)
    int32_t ecx_1 = data_702fc0
    data_715e98 = 0xffffffff
    
    if (ecx_1 != 0)
        int32_t edx_2 = data_13184f8
        int32_t eax_1 = arg1 - 1
        
        if (edx_2 == 0)
            if (data_13184e8:8 == edx_2 && (data_704870 != edx_2 || data_70486c != edx_2))
                eax_1 = 0
            
            if (data_13184dc == 0)
                eax_1 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_1 = 0
            
            if (data_1af174c == 0 && eax_1 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, 0x61a5ec, "= -1 "), 
                        data_72d6ac, data_719b6c, 0x61a5ec, "= -1 "), 
                    data_72d6ac, data_719b6c, 0x61a5ec, "= -1 ")
                edx_2 = data_13184f8
                ecx_1 = data_702fc0
        
        if (ecx_1 != 0)
            int32_t eax_4 = 1
            
            if (edx_2 == 0)
                if (data_13184e8:8 == edx_2 && (data_704870 != edx_2 || data_70486c != edx_2))
                    eax_4 = 0
                
                if (data_13184dc == 0)
                    eax_4 = 0
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_4 = 0
                
                if (data_1af174c == 0 && eax_4 != 0)
                    sub_55f390(
                        sub_55f1e0(sub_55ef70(eax_4, data_72d6ac, data_719b6c, 0x61a628, nullptr), 
                            data_72d6ac, data_719b6c, 0x61a628, nullptr), 
                        data_72d6ac, data_719b6c, 0x61a628, nullptr)
    
    bool cond:2_1 = data_108f2d4 != 3
    data_1af17b4 = 0
    
    if (cond:2_1)
        sub_4a1e40(2)
        sub_4996a0(sub_48b7f0(), &data_13130c0)
    else
        sub_414c50(data_8c4ac0.d)
        data_8c4ac0.d = 0xffffffff
        sub_48b7f0()
    
    sub_57e1c0()
    bool cond:4_1 = data_1af1768 == 0
    data_13701d8 = 0
    data_137010c = 1
    data_703670 = 0
    data_1372c14 = 1
    data_1af178c = 0
    data_1af1784 = 0
    
    if (not(cond:4_1))
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    
    if (data_71929c == 0x11)
        data_1af1788 = 1
