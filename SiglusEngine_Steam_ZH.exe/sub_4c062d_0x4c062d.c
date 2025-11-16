// 函数: sub_4c062d
// 地址: 0x4c062d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_14 = edi
int32_t i = 0

if ((arg1[0x33].b & 4) != 0)
    sub_4a3f75(arg1)
    
    if (arg1[3] u> 0)
        do
            int32_t eax_1 = arg1[6]
            arg1[0x3f] = i
            int32_t* eax_2 = *(eax_1 + (i << 2))
            arg1[0x40] = eax_2
            
            if ((*eax_2 & 0xfff00000) == 0x10000000)
                sub_4c936e(arg1)
            
            i += 1
        while (i u< arg1[3])
    
    sub_4a3f8e(arg1)

int32_t* edi_1

if ((arg1[0x33].b & 4) != 0 && (arg1[0x33].b & 4) != 0)
label_4c098d:
    int32_t i_1 = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_45 = arg1[6]
            arg1[0x3f] = i_1
            int32_t* eax_46 = *(eax_45 + (i_1 << 2))
            arg1[0x40] = eax_46
            
            if ((*eax_46 & 0xfff00000) == 0x50300000)
                edi_1 = sub_4c8922(arg1)
                
                if (edi_1 s< 0)
                    return edi_1
            
            i_1 += 1
        while (i_1 u< arg1[3])
    
    edi_1 = sub_4a4f2f(arg1)
    
    if (edi_1 s>= 0)
        edi_1 = sub_4ad8ba(arg1)
        
        if (edi_1 s>= 0)
            edi_1 = sub_49ff18(arg1)
            
            if (edi_1 s>= 0)
                edi_1 = sub_4a6590(arg1)
                
                if (edi_1 s>= 0)
                    sub_4c8264(arg1)
                    return nullptr
else
    int32_t i_2 = 0
    
    if (arg1[3] u<= 0)
        edi_1 = arg1
    else
        do
            int32_t eax_5 = arg1[6]
            arg1[0x3f] = i_2
            int32_t* eax_6 = *(eax_5 + (i_2 << 2))
            arg1[0x40] = eax_6
            int32_t eax_8 = *eax_6 & 0xfff00000
            
            if (eax_8 == 0x10100000)
                edi_1 = sub_4d3a58(arg1, 1)
            label_4c06ec:
                
                if (edi_1 s< 0)
                    return edi_1
            else
                if (eax_8 == 0x20000000 || eax_8 == 0x20100000 || eax_8 == 0x30000000)
                    edi_1 = sub_4c9d4c(arg1)
                    sub_4c8264(arg1)
                    goto label_4c06ec
                
                edi_1 = 1
            
            i_2 += 1
        while (i_2 u< arg1[3])
    
    int32_t i_3 = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_11 = arg1[6]
            arg1[0x3f] = i_3
            int32_t* eax_12 = *(eax_11 + (i_3 << 2))
            arg1[0x40] = eax_12
            
            if ((*eax_12 & 0xfff00000) == 0x30000000)
                if (edi_1 s< 0)
                    return edi_1
                
                int32_t* eax_15 = sub_4c93f1(arg1, nullptr, 0, nullptr)
                int16_t top = top - 1
                unimplemented  {call 0x4c93f1}
                
                if (eax_15 s< 0)
                    return eax_15
                
                edi_1 = sub_4c99ed(arg1, nullptr, 0, nullptr)
                
                if (edi_1 s< 0)
                    return edi_1
            else
                edi_1 = 1
            
            i_3 += 1
        while (i_3 u< arg1[3])
    
    edi_1 = sub_4a4f2f(arg1)
    
    if (edi_1 s>= 0)
        sub_4c8264(arg1)
        int32_t i_4 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t eax_18 = arg1[6]
                arg1[0x3f] = i_4
                int32_t* eax_19 = *(eax_18 + (i_4 << 2))
                arg1[0x40] = eax_19
                int32_t eax_21 = *eax_19 & 0xfff00000
                
                if (eax_21 == 0x20000000 || eax_21 == 0x70b00000)
                    edi_1 = sub_4c9d4c(arg1)
                    sub_4c8264(arg1)
                    
                    if (edi_1 s< 0)
                        return edi_1
                
                i_4 += 1
            while (i_4 u< arg1[3])
        
        int32_t i_5 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t eax_23 = arg1[6]
                arg1[0x3f] = i_5
                int32_t* eax_24 = *(eax_23 + (i_5 << 2))
                arg1[0x40] = eax_24
                int32_t eax_26 = *eax_24 & 0xfff00000
                int32_t* eax_28
                
                if (eax_26 == 0x10500000)
                    eax_28 = sub_4c8ee5(arg1)
                label_4c0847:
                    
                    if (eax_28 s< 0)
                        return eax_28
                else
                    if (eax_26 == 0x10f00000)
                        eax_28 = sub_4cc269(arg1)
                        goto label_4c0847
                    
                    if (eax_26 == 0x20400000)
                        if (sub_4ce6ec(arg1) != 0)
                            eax_28 = sub_4d3b12(arg1, 1)
                            goto label_4c0847
                    else if (eax_26 == 0x30000000 && sub_4ced6a(arg1) != 0)
                        eax_28 = sub_4cee3c(arg1)
                        goto label_4c0847
                i_5 += 1
            while (i_5 u< arg1[3])
        
        edi_1 = sub_4a4f2f(arg1)
        
        if (edi_1 s>= 0)
            sub_4c8264(arg1)
            int32_t i_6 = 0
            
            if (arg1[3] u> 0)
                do
                    int32_t eax_31 = arg1[6]
                    arg1[0x3f] = i_6
                    int32_t* eax_32 = *(eax_31 + (i_6 << 2))
                    arg1[0x40] = eax_32
                    int32_t eax_34 = *eax_32 & 0xfff00000
                    int32_t* eax_35
                    
                    if (eax_34 == 0x20500000)
                        eax_35 = sub_4ce0e9(arg1)
                    label_4c08da:
                        
                        if (eax_35 s< 0)
                            return eax_35
                    else
                        if (eax_34 == 0x50000000)
                            eax_35 = sub_4ce9ac(arg1)
                            goto label_4c08da
                        
                        if (eax_34 == 0x70300000)
                            eax_35 = sub_4cf3e5(arg1, 0)
                            goto label_4c08da
                        
                        if (eax_34 == 0x73500000 || eax_34 == 0x73600000)
                            eax_35 = sub_4cc5aa(arg1)
                            goto label_4c08da
                    i_6 += 1
                while (i_6 u< arg1[3])
            
            sub_4c8264(arg1)
            int32_t i_7 = 0
            
            if (arg1[3] u> 0)
                do
                    int32_t eax_36 = arg1[6]
                    arg1[0x3f] = i_7
                    int32_t* eax_37 = *(eax_36 + (i_7 << 2))
                    arg1[0x40] = eax_37
                    
                    if ((*eax_37 & 0xfff00000) == 0x70300000)
                        sub_4d4fc2(arg1)
                    
                    i_7 += 1
                while (i_7 u< arg1[3])
            
            sub_4c8264(arg1)
            int32_t i_8 = 0
            
            if (arg1[3] u> 0)
                do
                    int32_t eax_40 = arg1[6]
                    arg1[0x3f] = i_8
                    int32_t* eax_41 = *(eax_40 + (i_8 << 2))
                    arg1[0x40] = eax_41
                    int32_t eax_43 = *eax_41 & 0xfff00000
                    int32_t* eax_44
                    
                    if (eax_43 == 0x70300000)
                        eax_44 = sub_4cf3e5(arg1, 0)
                    label_4c0981:
                        
                        if (eax_44 s< 0)
                            return eax_44
                    else if (eax_43 == 0x73500000 || eax_43 == 0x73600000 || eax_43 == 0x73700000
                            || eax_43 == 0x73800000)
                        eax_44 = sub_4cc85a(arg1)
                        goto label_4c0981
                    i_8 += 1
                while (i_8 u< arg1[3])
            
            goto label_4c098d

return edi_1
