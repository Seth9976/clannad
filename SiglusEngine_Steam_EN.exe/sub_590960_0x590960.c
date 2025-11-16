// 函数: sub_590960
// 地址: 0x590960
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_66 = data_1cd4484
void* const eax_3

if (eax_66 != 0)
    int32_t ecx_13 = data_1cd4480
    
    if (ecx_13 == 0)
        int32_t* edi_4 = data_1cd4490
        int32_t edx_2 = data_1c4ce34
        int32_t i_5 = data_1cd4484 + 1
        int32_t eax_35
        int32_t i
        
        do
            int32_t eax_24
            eax_24.b = *(data_1cd4470 + data_1cd446c)
            
            if (data_1cd4468 != 0)
                eax_24.b = not.b(eax_24.b)
            
            int32_t eax_26 = (eax_24 << (data_1cd4464).b) + data_1cd4460
            
            if (eax_26 s< 0)
                eax_26 = 0
            else if (eax_26 s> 0xff)
                eax_26 = 0xff
            
            int32_t ebx_25
            ebx_25.b = eax_26.b
            
            if (ebx_25.b != 0)
                int32_t ebx_30
                ebx_30.b = (*(*((ebx_25 << 2) + data_1cd4328) + 0x3fc)).b
                
                if (ebx_30.b != 0)
                    if (ebx_30 != 0xff)
                        int32_t esi_5 = *((ebx_30 << 2) + data_1cd4328)
                        int32_t eax_28
                        eax_28.b = *edi_4
                        *edi_4 = eax_28.b + (*(((data_1cd447c - eax_28) << 2) + esi_5)).b
                        int32_t eax_30
                        eax_30.b = *(edi_4 + 1)
                        *(edi_4 + 1) = eax_30.b + (*(((data_1cd4478 - eax_30) << 2) + esi_5)).b
                        int32_t eax_32
                        eax_32.b = *(edi_4 + 2)
                        *(edi_4 + 2) = eax_32.b + (*(((data_1cd4474 - eax_32) << 2) + esi_5)).b
                    else
                        *edi_4 = data_1cd448c
            
            eax_35 = data_1cd4470 + data_1ccce54
            
            if (eax_35 s< data_1cd4454)
                eax_35 = data_1cd4458 - data_1cd445c
            else if (eax_35 s>= data_1cd4458)
                eax_35 = data_1cd4454
            
            data_1cd4470 = eax_35
            edi_4 += edx_2
            i = i_5
            i_5 -= 1
        while (i != 1)
        return eax_35
    
    if (ecx_13 s> eax_66)
        int32_t* edi_5 = data_1cd4490
        int32_t i_6 = data_1cd4480 + 1
        int32_t edx_3 = data_1ccce5c
        data_1cd43a4
        int32_t eax_48
        int32_t i_1
        
        do
            int32_t eax_37
            eax_37.b = *(data_1cd4470 + data_1cd446c)
            
            if (data_1cd4468 != 0)
                eax_37.b = not.b(eax_37.b)
            
            int32_t eax_39 = (eax_37 << (data_1cd4464).b) + data_1cd4460
            
            if (eax_39 s< 0)
                eax_39 = 0
            else if (eax_39 s> 0xff)
                eax_39 = 0xff
            
            int32_t ebx_47
            ebx_47.b = eax_39.b
            
            if (ebx_47.b != 0)
                int32_t ebx_52
                ebx_52.b = (*(*((ebx_47 << 2) + data_1cd4328) + 0x3fc)).b
                
                if (ebx_52.b != 0)
                    if (ebx_52 != 0xff)
                        int32_t esi_7 = *((ebx_52 << 2) + data_1cd4328)
                        int32_t eax_41
                        eax_41.b = *edi_5
                        *edi_5 = eax_41.b + (*(((data_1cd447c - eax_41) << 2) + esi_7)).b
                        int32_t eax_43
                        eax_43.b = *(edi_5 + 1)
                        *(edi_5 + 1) = eax_43.b + (*(((data_1cd4478 - eax_43) << 2) + esi_7)).b
                        int32_t eax_45
                        eax_45.b = *(edi_5 + 2)
                        *(edi_5 + 2) = eax_45.b + (*(((data_1cd4474 - eax_45) << 2) + esi_7)).b
                    else
                        *edi_5 = data_1cd448c
            
            eax_48 = data_1cd446c + data_1ccce60
            
            if (eax_48 s< 0)
                eax_48 = data_1cd445c - 1
            else if (eax_48 s>= data_1cd445c)
                eax_48 = 0
            
            data_1cd446c = eax_48
            edi_5 += data_1cd4488
            edx_3 += data_1c4ce38
            
            if (edx_3 s>= 0)
                eax_48 = data_1cd4470 + data_1ccce54
                
                if (eax_48 s< data_1cd4454)
                    eax_48 = data_1cd4458 - data_1cd445c
                else if (eax_48 s>= data_1cd4458)
                    eax_48 = data_1cd4454
                
                data_1cd4470 = eax_48
                edi_5 += data_1c4ce34
                edx_3 -= data_1cd4324
            
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
        return eax_48
    
    int32_t* edi_6 = data_1cd4490
    int32_t i_7 = data_1cd4484 + 1
    int32_t edx_4 = data_1ccce5c
    data_1cd43a4
    int32_t i_2
    
    do
        int32_t eax_52
        eax_52.b = *(data_1cd4470 + data_1cd446c)
        
        if (data_1cd4468 != 0)
            eax_52.b = not.b(eax_52.b)
        
        int32_t eax_54 = (eax_52 << (data_1cd4464).b) + data_1cd4460
        
        if (eax_54 s< 0)
            eax_54 = 0
        else if (eax_54 s> 0xff)
            eax_54 = 0xff
        
        int32_t ebx_69
        ebx_69.b = eax_54.b
        
        if (ebx_69.b != 0)
            int32_t ebx_74
            ebx_74.b = (*(*((ebx_69 << 2) + data_1cd4328) + 0x3fc)).b
            
            if (ebx_74.b != 0)
                if (ebx_74 != 0xff)
                    int32_t esi_9 = *((ebx_74 << 2) + data_1cd4328)
                    int32_t eax_56
                    eax_56.b = *edi_6
                    *edi_6 = eax_56.b + (*(((data_1cd447c - eax_56) << 2) + esi_9)).b
                    int32_t eax_58
                    eax_58.b = *(edi_6 + 1)
                    *(edi_6 + 1) = eax_58.b + (*(((data_1cd4478 - eax_58) << 2) + esi_9)).b
                    int32_t eax_60
                    eax_60.b = *(edi_6 + 2)
                    *(edi_6 + 2) = eax_60.b + (*(((data_1cd4474 - eax_60) << 2) + esi_9)).b
                else
                    *edi_6 = data_1cd448c
        
        eax_3 = data_1cd4470 + data_1ccce54
        
        if (eax_3 s< data_1cd4454)
            eax_3 = data_1cd4458 - data_1cd445c
        else if (eax_3 s>= data_1cd4458)
            eax_3 = data_1cd4454
        
        data_1cd4470 = eax_3
        edi_6 += data_1c4ce34
        edx_4 += data_1c4ce38
        
        if (edx_4 s>= 0)
            eax_3 = data_1cd446c + data_1ccce60
            
            if (eax_3 s< 0)
                eax_3 = data_1cd445c - 1
            else if (eax_3 s>= data_1cd445c)
                eax_3 = nullptr
            
            data_1cd446c = eax_3
            edi_6 += data_1cd4488
            edx_4 -= data_1cd4324
        
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)
else
    if (data_1cd4480 != eax_66)
        int32_t* edi_3 = data_1cd4490
        int32_t edx_1 = data_1cd4488
        int32_t i_4 = data_1cd4480 + 1
        int32_t eax_22
        int32_t i_3
        
        do
            int32_t eax_11
            eax_11.b = *(data_1cd4470 + data_1cd446c)
            
            if (data_1cd4468 != 0)
                eax_11.b = not.b(eax_11.b)
            
            int32_t eax_13 = (eax_11 << (data_1cd4464).b) + data_1cd4460
            
            if (eax_13 s< 0)
                eax_13 = 0
            else if (eax_13 s> 0xff)
                eax_13 = 0xff
            
            int32_t ebx_3
            ebx_3.b = eax_13.b
            
            if (ebx_3.b != 0)
                int32_t ebx_8
                ebx_8.b = (*(*((ebx_3 << 2) + data_1cd4328) + 0x3fc)).b
                
                if (ebx_8.b != 0)
                    if (ebx_8 != 0xff)
                        int32_t esi_4 = *((ebx_8 << 2) + data_1cd4328)
                        int32_t eax_15
                        eax_15.b = *edi_3
                        *edi_3 = eax_15.b + (*(((data_1cd447c - eax_15) << 2) + esi_4)).b
                        int32_t eax_17
                        eax_17.b = *(edi_3 + 1)
                        *(edi_3 + 1) = eax_17.b + (*(((data_1cd4478 - eax_17) << 2) + esi_4)).b
                        int32_t eax_19
                        eax_19.b = *(edi_3 + 2)
                        *(edi_3 + 2) = eax_19.b + (*(((data_1cd4474 - eax_19) << 2) + esi_4)).b
                    else
                        *edi_3 = data_1cd448c
            
            eax_22 = data_1cd446c + data_1ccce60
            
            if (eax_22 s< 0)
                eax_22 = data_1cd445c - 1
            else if (eax_22 s>= data_1cd445c)
                eax_22 = 0
            
            data_1cd446c = eax_22
            edi_3 += edx_1
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)
        return eax_22
    
    int32_t ecx = data_1cd4470
    char* eax = data_1cd446c
    uint32_t eax_1
    
    if (data_1cd4468 == 0)
        eax_1 = zx.d(eax[ecx])
    else
        eax.b = eax[ecx]
        eax.b = not.b(eax.b)
        eax_1 = zx.d(eax.b)
    
    uint32_t eax_2 = eax_1 << (data_1cd4464).b
    eax_3 = eax_2 + data_1cd4460
    
    if (eax_2 + data_1cd4460 s>= 0)
        if (eax_3 s> 0xff)
            eax_3 = 0xff
        label_5909c8:
            int32_t ecx_2 = data_1cd4328
            eax_3 = *(ecx_2 + (eax_3 << 2))
            int32_t edi_1 = *(eax_3 + 0x3fc)
            
            if (edi_1 == 0xff)
                int32_t eax_4 = data_1cd448c
                *data_1cd4490 = eax_4
                return eax_4
            
            if (edi_1 != 0)
                int32_t edi_2 = *(ecx_2 + (edi_1 << 2))
                char* esi_1 = data_1cd4490
                *esi_1 += *(edi_2 + ((data_1cd447c - zx.d(*esi_1)) << 2))
                void* esi_2 = data_1cd4490
                *(esi_2 + 1) += *(edi_2 + ((data_1cd4478 - zx.d(*(esi_2 + 1))) << 2))
                void* esi_3 = data_1cd4490
                char eax_10 = *(edi_2 + ((data_1cd4474 - zx.d(*(esi_3 + 2))) << 2))
                *(esi_3 + 2) += eax_10
                return eax_10
        else if (eax_3 != 0)
            goto label_5909c8

return eax_3
