// 函数: sub_590f40
// 地址: 0x590f40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_74 = data_1cd4484
int32_t eax_3

if (eax_74 != 0)
    int32_t ecx_13 = data_1cd4480
    
    if (ecx_13 == 0)
        int32_t* edi_4 = data_1cd4490
        int32_t edx_3 = data_1c4ce34
        int32_t i_5 = data_1cd4484 + 1
        int32_t eax_39
        int32_t i
        
        do
            int32_t eax_26
            eax_26.b = *(data_1cd4470 + data_1cd446c)
            
            if (data_1cd4468 != 0)
                eax_26.b = not.b(eax_26.b)
            
            int32_t eax_28 = (eax_26 << (data_1cd4464).b) + data_1cd4460
            
            if (eax_28 s< 0)
                eax_28 = 0
            else if (eax_28 s> 0xff)
                eax_28 = 0xff
            
            int32_t ebx_25
            ebx_25.b = eax_28.b
            
            if (ebx_25.b != 0)
                int32_t ebx_30
                ebx_30.b = (*(*((ebx_25 << 2) + data_1cd4328) + ((0xff - data_1cd4450) << 2))).b
                
                if (ebx_30.b != 0)
                    if (ebx_30 != 0xff)
                        int32_t esi_5 = *((ebx_30 << 2) + data_1cd4328)
                        int32_t eax_32
                        eax_32.b = *edi_4
                        *edi_4 = eax_32.b + (*(((data_1cd447c - eax_32) << 2) + esi_5)).b
                        int32_t eax_34
                        eax_34.b = *(edi_4 + 1)
                        *(edi_4 + 1) = eax_34.b + (*(((data_1cd4478 - eax_34) << 2) + esi_5)).b
                        int32_t eax_36
                        eax_36.b = *(edi_4 + 2)
                        *(edi_4 + 2) = eax_36.b + (*(((data_1cd4474 - eax_36) << 2) + esi_5)).b
                    else
                        *edi_4 = data_1cd448c
            
            eax_39 = data_1cd4470 + data_1ccce54
            
            if (eax_39 s< data_1cd4454)
                eax_39 = data_1cd4458 - data_1cd445c
            else if (eax_39 s>= data_1cd4458)
                eax_39 = data_1cd4454
            
            data_1cd4470 = eax_39
            edi_4 += edx_3
            i = i_5
            i_5 -= 1
        while (i != 1)
        return eax_39
    
    if (ecx_13 s> eax_74)
        int32_t* edi_5 = data_1cd4490
        int32_t i_6 = data_1cd4480 + 1
        int32_t edx_4 = data_1ccce5c
        data_1cd43a4
        int32_t eax_54
        int32_t i_1
        
        do
            int32_t eax_41
            eax_41.b = *(data_1cd4470 + data_1cd446c)
            
            if (data_1cd4468 != 0)
                eax_41.b = not.b(eax_41.b)
            
            int32_t eax_43 = (eax_41 << (data_1cd4464).b) + data_1cd4460
            
            if (eax_43 s< 0)
                eax_43 = 0
            else if (eax_43 s> 0xff)
                eax_43 = 0xff
            
            int32_t ebx_47
            ebx_47.b = eax_43.b
            
            if (ebx_47.b != 0)
                int32_t ebx_52
                ebx_52.b = (*(*((ebx_47 << 2) + data_1cd4328) + ((0xff - data_1cd4450) << 2))).b
                
                if (ebx_52.b != 0)
                    if (ebx_52 != 0xff)
                        int32_t esi_7 = *((ebx_52 << 2) + data_1cd4328)
                        int32_t eax_47
                        eax_47.b = *edi_5
                        *edi_5 = eax_47.b + (*(((data_1cd447c - eax_47) << 2) + esi_7)).b
                        int32_t eax_49
                        eax_49.b = *(edi_5 + 1)
                        *(edi_5 + 1) = eax_49.b + (*(((data_1cd4478 - eax_49) << 2) + esi_7)).b
                        int32_t eax_51
                        eax_51.b = *(edi_5 + 2)
                        *(edi_5 + 2) = eax_51.b + (*(((data_1cd4474 - eax_51) << 2) + esi_7)).b
                    else
                        *edi_5 = data_1cd448c
            
            eax_54 = data_1cd446c + data_1ccce60
            
            if (eax_54 s< 0)
                eax_54 = data_1cd445c - 1
            else if (eax_54 s>= data_1cd445c)
                eax_54 = 0
            
            data_1cd446c = eax_54
            edi_5 += data_1cd4488
            edx_4 += data_1c4ce38
            
            if (edx_4 s>= 0)
                eax_54 = data_1cd4470 + data_1ccce54
                
                if (eax_54 s< data_1cd4454)
                    eax_54 = data_1cd4458 - data_1cd445c
                else if (eax_54 s>= data_1cd4458)
                    eax_54 = data_1cd4454
                
                data_1cd4470 = eax_54
                edi_5 += data_1c4ce34
                edx_4 -= data_1cd4324
            
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
        return eax_54
    
    int32_t* edi_6 = data_1cd4490
    int32_t i_7 = data_1cd4484 + 1
    int32_t edx_5 = data_1ccce5c
    data_1cd43a4
    int32_t i_2
    
    do
        int32_t eax_58
        eax_58.b = *(data_1cd4470 + data_1cd446c)
        
        if (data_1cd4468 != 0)
            eax_58.b = not.b(eax_58.b)
        
        int32_t eax_60 = (eax_58 << (data_1cd4464).b) + data_1cd4460
        
        if (eax_60 s< 0)
            eax_60 = 0
        else if (eax_60 s> 0xff)
            eax_60 = 0xff
        
        int32_t ebx_69
        ebx_69.b = eax_60.b
        
        if (ebx_69.b != 0)
            int32_t ebx_74
            ebx_74.b = (*(*((ebx_69 << 2) + data_1cd4328) + ((0xff - data_1cd4450) << 2))).b
            
            if (ebx_74.b != 0)
                if (ebx_74 != 0xff)
                    int32_t esi_9 = *((ebx_74 << 2) + data_1cd4328)
                    int32_t eax_64
                    eax_64.b = *edi_6
                    *edi_6 = eax_64.b + (*(((data_1cd447c - eax_64) << 2) + esi_9)).b
                    int32_t eax_66
                    eax_66.b = *(edi_6 + 1)
                    *(edi_6 + 1) = eax_66.b + (*(((data_1cd4478 - eax_66) << 2) + esi_9)).b
                    int32_t eax_68
                    eax_68.b = *(edi_6 + 2)
                    *(edi_6 + 2) = eax_68.b + (*(((data_1cd4474 - eax_68) << 2) + esi_9)).b
                else
                    *edi_6 = data_1cd448c
        
        eax_3 = data_1cd4470 + data_1ccce54
        
        if (eax_3 s< data_1cd4454)
            eax_3 = data_1cd4458 - data_1cd445c
        else if (eax_3 s>= data_1cd4458)
            eax_3 = data_1cd4454
        
        data_1cd4470 = eax_3
        edi_6 += data_1c4ce34
        edx_5 += data_1c4ce38
        
        if (edx_5 s>= 0)
            eax_3 = data_1cd446c + data_1ccce60
            
            if (eax_3 s< 0)
                eax_3 = data_1cd445c - 1
            else if (eax_3 s>= data_1cd445c)
                eax_3 = 0
            
            data_1cd446c = eax_3
            edi_6 += data_1cd4488
            edx_5 -= data_1cd4324
        
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)
else
    if (data_1cd4480 != eax_74)
        int32_t* edi_3 = data_1cd4490
        int32_t edx_2 = data_1cd4488
        int32_t i_4 = data_1cd4480 + 1
        int32_t eax_24
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
                ebx_8.b = (*(*((ebx_3 << 2) + data_1cd4328) + ((0xff - data_1cd4450) << 2))).b
                
                if (ebx_8.b != 0)
                    if (ebx_8 != 0xff)
                        int32_t esi_4 = *((ebx_8 << 2) + data_1cd4328)
                        int32_t eax_17
                        eax_17.b = *edi_3
                        *edi_3 = eax_17.b + (*(((data_1cd447c - eax_17) << 2) + esi_4)).b
                        int32_t eax_19
                        eax_19.b = *(edi_3 + 1)
                        *(edi_3 + 1) = eax_19.b + (*(((data_1cd4478 - eax_19) << 2) + esi_4)).b
                        int32_t eax_21
                        eax_21.b = *(edi_3 + 2)
                        *(edi_3 + 2) = eax_21.b + (*(((data_1cd4474 - eax_21) << 2) + esi_4)).b
                    else
                        *edi_3 = data_1cd448c
            
            eax_24 = data_1cd446c + data_1ccce60
            
            if (eax_24 s< 0)
                eax_24 = data_1cd445c - 1
            else if (eax_24 s>= data_1cd445c)
                eax_24 = 0
            
            data_1cd446c = eax_24
            edi_3 += edx_2
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)
        return eax_24
    
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
        label_590fa8:
            int32_t edx_1 = data_1cd4328
            int32_t ecx_2 = *(edx_1 + (eax_3 << 2))
            eax_3 = data_1cd4434
            int32_t edi_1 = *(ecx_2 + (eax_3 << 2))
            
            if (edi_1 == 0xff)
                int32_t eax_4 = data_1cd448c
                *data_1cd4490 = eax_4
                return eax_4
            
            if (edi_1 != 0)
                char* esi_1 = data_1cd4490
                int32_t edi_2 = *(edx_1 + (edi_1 << 2))
                *esi_1 += *(edi_2 + ((data_1cd447c - zx.d(*esi_1)) << 2))
                void* esi_2 = data_1cd4490
                *(esi_2 + 1) += *(edi_2 + ((data_1cd4478 - zx.d(*(esi_2 + 1))) << 2))
                void* esi_3 = data_1cd4490
                char eax_10 = *(edi_2 + ((data_1cd4474 - zx.d(*(esi_3 + 2))) << 2))
                *(esi_3 + 2) += eax_10
                return eax_10
        else if (eax_3 != 0)
            goto label_590fa8

return eax_3
