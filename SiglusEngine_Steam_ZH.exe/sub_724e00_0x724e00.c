// 函数: sub_724e00
// 地址: 0x724e00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char** var_20 = arg1

if (arg1 != 0)
    int32_t* ecx = arg1[7]
    int32_t* var_c_1 = ecx
    
    if (ecx != 0 && arg1[3] != 0 && (*arg1 != 0 || arg1[1] == 0))
        if (*ecx == 0xb)
            *ecx = 0xc
        
        void* j_14 = arg1[1]
        int32_t j = ecx[0xf]
        char* var_2c = arg1[3]
        void* j_10 = arg1[4]
        uint32_t edx_2 = ecx[0xe]
        void* j_12 = j_10
        int32_t result = 0
        uint32_t i = *ecx
        char* var_14 = *arg1
        void* j_16 = j_14
        uint32_t var_8 = edx_2
        int32_t j_4 = j
        void* j_15 = j_14
        
        if (i u<= 0x1e)
            void* edi_1 = &ecx[0x15]
            void* edi_2 = &ecx[0x16]
            char* edi_3 = var_14
            
            do
                char var_28
                void* j_20
                int32_t edx_24
                
                switch (i)
                    case 0
                        int32_t eax_2 = ecx[2]
                        
                        if (eax_2 != 0)
                            if (j u< 0x10)
                                do
                                    if (j_14 == 0)
                                        goto label_7253a8
                                    
                                    uint32_t eax_4 = zx.d(*edi_3) << j.b
                                    j += 8
                                    j_14 -= 1
                                    j_4 = j
                                    edx_2 += eax_4
                                    j_16 = j_14
                                    edi_3 = &edi_3[1]
                                    var_8 = edx_2
                                    var_14 = edi_3
                                while (j u< 0x10)
                                
                                ecx = var_c_1
                            
                            if ((eax_2.b & 2) == 0 || edx_2 != 0x8b1f)
                                void* eax_7 = ecx[8]
                                ecx[4] = 0
                                
                                if (eax_7 != 0)
                                    *(eax_7 + 0x30) = 0xffffffff
                                
                                if ((ecx[2].b & 1) == 0)
                                    var_20[6] = "incorrect header check"
                                    *ecx = 0x1d
                                else
                                    uint32_t eax_10 = (edx_2 u>> 8) + (zx.d(edx_2.b) << 8)
                                    ecx = var_c_1
                                    edx_2 = var_8
                                    
                                    if (modu.dp.d(0:eax_10, 0x1f) != 0)
                                        var_20[6] = "incorrect header check"
                                        *ecx = 0x1d
                                    else if ((edx_2.b & 0xf) == 8)
                                        edx_2 u>>= 4
                                        j -= 4
                                        var_8 = edx_2
                                        j_4 = j
                                        
                                        if (ecx[9] != 0)
                                            if ((edx_2 & 0xf) + 8 u<= ecx[9])
                                                goto label_724fb9
                                            
                                            var_20[6] = "invalid window size"
                                            *ecx = 0x1d
                                        else
                                            ecx[9] = (edx_2 & 0xf) + 8
                                        label_724fb9:
                                            int32_t eax_17 = 1 << ((edx_2 & 0xf) + 8).b
                                            var_c_1[5] = eax_17
                                            void* eax_18 = sub_7247a0(eax_17, nullptr, 0, 0)
                                            ecx = var_c_1
                                            ecx[6] = eax_18
                                            var_20[0xc] = eax_18
                                            *ecx = (not.d(var_8 u>> 8) & 2) | 9
                                            edx_2 = 0
                                            j = 0
                                            var_8 = 0
                                            j_4 = 0
                                    else
                                        var_20[6] = "unknown compression method"
                                        *ecx = 0x1d
                            else
                                int32_t eax_5 = sub_724a10(eax_2, nullptr, 0, 0)
                                var_28.w = 0x8b1f
                                var_c_1[6] = eax_5
                                ecx = var_c_1
                                edx_2 = 0
                                var_8 = 0
                                j = 0
                                j_4 = 0
                                ecx[6] = sub_724a10(eax_5, &var_28, eax_5, 2)
                                *ecx = 1
                        else
                            *ecx = 0xc
                    case 1
                        if (j u< 0x10)
                            do
                                if (j_14 == 0)
                                    goto label_7253a8
                                
                                i = zx.d(*edi_3) << j.b
                                j += 8
                                j_14 -= 1
                                j_4 = j
                                edx_2 += i
                                j_16 = j_14
                                edi_3 = &edi_3[1]
                                var_8 = edx_2
                                var_14 = edi_3
                            while (j u< 0x10)
                            
                            ecx = var_c_1
                        
                        ecx[4] = edx_2
                        
                        if (edx_2.b == 8)
                            if ((edx_2 & 0xe000) == 0)
                                uint32_t* esi = ecx[8]
                                
                                if (esi != 0)
                                    i = edx_2 u>> 8 & 1
                                    *esi = i
                                
                                if ((ecx[4] & 0x200) != 0)
                                    int32_t ecx_9 = ecx[6]
                                    var_28 = edx_2.b
                                    uint8_t var_27_1 = (edx_2 u>> 8).b
                                    ecx = var_c_1
                                    ecx[6] = sub_724a10(i, &var_28, ecx_9, 2)
                                
                                edx_2 = 0
                                *ecx = 2
                                var_8 = 0
                                j = 0
                                goto label_725103
                            
                            var_20[6] = "unknown header flags set"
                            *ecx = 0x1d
                        else
                            var_20[6] = "unknown compression method"
                            *ecx = 0x1d
                    case 2
                        if (j u< 0x20)
                        label_725103:
                            
                            do
                                if (j_14 == 0)
                                    goto label_7253a8
                                
                                j_14 -= 1
                                edx_2 += zx.d(*edi_3) << j.b
                                j_16 = j_14
                                edi_3 = &edi_3[1]
                                var_8 = edx_2
                                j += 8
                                var_14 = edi_3
                            while (j u< 0x20)
                            
                            ecx = var_c_1
                        
                        void* eax_29 = ecx[8]
                        
                        if (eax_29 != 0)
                            *(eax_29 + 4) = edx_2
                        
                        if ((ecx[4] & 0x200) != 0)
                            int32_t ecx_11 = ecx[6]
                            uint8_t var_27_2 = (edx_2 u>> 8).b
                            var_28 = edx_2.b
                            uint32_t eax_33 = edx_2 u>> 0x10
                            uint8_t var_25_1 = (edx_2 u>> 0x18).b
                            char var_26_1 = eax_33.b
                            ecx = var_c_1
                            ecx[6] = sub_724a10(eax_33, &var_28, ecx_11, 4)
                        
                        edx_2 = 0
                        *ecx = 3
                        var_8 = 0
                        j = 0
                        goto label_725182
                    case 3
                        if (j u< 0x10)
                        label_725182:
                            
                            do
                                if (j_14 == 0)
                                    goto label_7253a8
                                
                                i = zx.d(*edi_3) << j.b
                                j_14 -= 1
                                edx_2 += i
                                j_16 = j_14
                                edi_3 = &edi_3[1]
                                var_8 = edx_2
                                j += 8
                                var_14 = edi_3
                            while (j u< 0x10)
                            
                            ecx = var_c_1
                        
                        void* esi_1 = ecx[8]
                        
                        if (esi_1 != 0)
                            *(esi_1 + 8) = zx.d(edx_2.b)
                            i = var_c_1[8]
                            *(i + 0xc) = edx_2 u>> 8
                            ecx = var_c_1
                        
                        if ((ecx[4] & 0x200) != 0)
                            int32_t ecx_15 = ecx[6]
                            var_28 = edx_2.b
                            uint8_t var_27_3 = (edx_2 u>> 8).b
                            ecx = var_c_1
                            ecx[6] = sub_724a10(i, &var_28, ecx_15, 2)
                        
                        edx_2 = 0
                        *ecx = 4
                        j = 0
                        var_8 = 0
                        j_4 = 0
                        goto label_7251e4
                    case 4
                    label_7251e4:
                        
                        if ((ecx[4] & 0x400) == 0)
                            void* eax_43 = ecx[8]
                            
                            if (eax_43 != 0)
                                *(eax_43 + 0x10) = 0
                        else
                            if (j u< 0x10)
                                do
                                    if (j_14 == 0)
                                        goto label_7253a8
                                    
                                    j_14 -= 1
                                    edx_2 += zx.d(*edi_3) << j.b
                                    j_16 = j_14
                                    edi_3 = &edi_3[1]
                                    var_8 = edx_2
                                    j += 8
                                    var_14 = edi_3
                                while (j u< 0x10)
                                
                                ecx = var_c_1
                            
                            void* eax_41 = ecx[8]
                            ecx[0x10] = edx_2
                            
                            if (eax_41 != 0)
                                *(eax_41 + 0x14) = edx_2
                            
                            if ((ecx[4] & 0x200) != 0)
                                int32_t ecx_17 = ecx[6]
                                var_28 = edx_2.b
                                uint8_t var_27_4 = (edx_2 u>> 8).b
                                ecx = var_c_1
                                ecx[6] = sub_724a10(eax_41, &var_28, ecx_17, 2)
                            
                            j = 0
                            var_8 = 0
                            j_4 = 0
                        
                        *ecx = 5
                    label_72526e:
                        
                        if ((ecx[4] & 0x400) != 0)
                            void* j_19 = ecx[0x10]
                            void* j_17 = j_19
                            
                            if (j_19 u> j_14)
                                j_17 = j_14
                            
                            void* j_18 = j_17
                            
                            if (j_17 != 0)
                                void* eax_44 = ecx[8]
                                
                                if (eax_44 != 0)
                                    void* edi_4 = *(eax_44 + 0x10)
                                    edi_3 = var_14
                                    
                                    if (edi_4 != 0)
                                        void* ecx_19 = *(eax_44 + 0x14) - j_19
                                        int32_t ecx_20 = *(eax_44 + 0x18)
                                        void* j_21
                                        
                                        if (ecx_19 + j_17 u<= ecx_20)
                                            j_21 = j_17
                                        else
                                            j_21 = ecx_20 - ecx_19
                                        
                                        eax_44 = sub_726520(ecx_19.b, edi_3, edi_4 + ecx_19, j_21)
                                        ecx = var_c_1
                                        j_17 = j_18
                                
                                if ((ecx[4] & 0x200) != 0)
                                    int32_t eax_48 = sub_724a10(eax_44, edi_3, ecx[6], j_17)
                                    ecx = var_c_1
                                    ecx[6] = eax_48
                                
                                j_14 -= j_18
                                edi_3 += j_18
                                j_16 = j_14
                                ecx[0x10] -= j_18
                                var_14 = edi_3
                            
                            if (ecx[0x10] != 0)
                                goto label_7253a8
                            
                            goto label_72530e
                        
                    label_72530e:
                        ecx[0x10] = 0
                        *ecx = 6
                    label_725322:
                        
                        if ((ecx[4] & 0x800) == 0)
                            void* eax_61 = ecx[8]
                            
                            if (eax_61 != 0)
                                *(eax_61 + 0x1c) = 0
                        else
                            if (j_14 == 0)
                                goto label_7253a8
                            
                            void* edx_22 = nullptr
                            uint32_t eax_50
                            uint32_t eax_54
                            
                            do
                                eax_50 = zx.d(*(edx_22 + edi_3))
                                edx_22 += 1
                                void* eax_51 = ecx[8]
                                
                                if (eax_51 != 0)
                                    char* esi_2 = *(eax_51 + 0x1c)
                                    
                                    if (esi_2 != 0)
                                        int32_t esi_3 = ecx[0x10]
                                        
                                        if (esi_3 u< *(eax_51 + 0x20))
                                            esi_2[esi_3] = eax_50.b
                                            ecx[0x10] += 1
                                            j_14 = j_16
                                
                                eax_54 = eax_50
                                
                                if (eax_54 == 0)
                                    break
                            while (edx_22 u< j_14)
                            
                            j = j_4
                            
                            if ((ecx[4] & 0x200) != 0)
                                int32_t eax_53 = sub_724a10(eax_54, edi_3, ecx[6], edx_22)
                                ecx = var_c_1
                                ecx[6] = eax_53
                                eax_54 = eax_50
                            
                            j_14 -= edx_22
                            edi_3 += edx_22
                            j_16 = j_14
                            var_14 = edi_3
                            
                            if (eax_54 != 0)
                                goto label_7253a8
                        
                        ecx[0x10] = 0
                        *ecx = 7
                    label_72544b:
                        
                        if ((ecx[4] & 0x1000) == 0)
                            i = ecx[8]
                            
                            if (i != 0)
                                *(i + 0x24) = 0
                        else
                            if (j_14 == 0)
                                goto label_7253a8
                            
                            void* edx_26 = nullptr
                            uint32_t i_1
                            
                            do
                                i_1 = zx.d(*(edx_26 + edi_3))
                                edx_26 += 1
                                void* eax_62 = ecx[8]
                                
                                if (eax_62 != 0)
                                    char* esi_6 = *(eax_62 + 0x24)
                                    
                                    if (esi_6 != 0)
                                        int32_t esi_7 = ecx[0x10]
                                        
                                        if (esi_7 u< *(eax_62 + 0x28))
                                            esi_6[esi_7] = i_1.b
                                            ecx[0x10] += 1
                                            j_14 = j_16
                                
                                i = i_1
                                
                                if (i == 0)
                                    break
                            while (edx_26 u< j_14)
                            
                            j = j_4
                            
                            if ((ecx[4] & 0x200) != 0)
                                int32_t eax_64 = sub_724a10(i, edi_3, ecx[6], edx_26)
                                ecx = var_c_1
                                ecx[6] = eax_64
                                i = i_1
                            
                            j_14 -= edx_26
                            edi_3 += edx_26
                            j_16 = j_14
                            var_14 = edi_3
                            
                            if (i != 0)
                                goto label_7253a8
                        
                        edx_2 = var_8
                        *ecx = 8
                    label_7254f1:
                        
                        if ((ecx[4] & 0x200) == 0)
                            goto label_725553
                        
                        if (j u< 0x10)
                            do
                                if (j_14 == 0)
                                    goto label_7253a8
                                
                                uint32_t eax_66 = zx.d(*edi_3) << j.b
                                j += 8
                                j_14 -= 1
                                j_4 = j
                                edx_2 += eax_66
                                j_16 = j_14
                                edi_3 = &edi_3[1]
                                var_8 = edx_2
                                var_14 = edi_3
                            while (j u< 0x10)
                            
                            ecx = var_c_1
                        
                        i = zx.d(ecx[6].w)
                        
                        if (edx_2 == i)
                            j = 0
                            var_8 = 0
                            j_4 = 0
                        label_725553:
                            void* edx_28 = ecx[8]
                            
                            if (edx_28 != 0)
                                *(edx_28 + 0x2c) = ecx[4] s>> 9 & 1
                                i = ecx[8]
                                *(i + 0x30) = 1
                            
                            int32_t eax_71 = sub_724a10(i, nullptr, 0, 0)
                            ecx = var_c_1
                            ecx[6] = eax_71
                            var_20[0xc] = eax_71
                            *ecx = 0xb
                            edx_2 = var_8
                        else
                            var_20[6] = "header crc mismatch"
                            *ecx = 0x1d
                    case 5
                        goto label_72526e
                    case 6
                        goto label_725322
                    case 7
                        goto label_72544b
                    case 8
                        goto label_7254f1
                    case 9
                        while (j u< 0x20)
                            if (j_14 == 0)
                                goto label_7253a8
                            
                            j_14 -= 1
                            edx_2 += zx.d(*edi_3) << j.b
                            j_16 = j_14
                            edi_3 = &edi_3[1]
                            var_8 = edx_2
                            j += 8
                            var_14 = edi_3
                        
                        ecx = var_c_1
                        i = (edx_2 u>> 8 & 0xff00) + (((edx_2 & 0xff00) + (edx_2 << 0x10)) << 8)
                            + (edx_2 u>> 0x18)
                        ecx[6] = i
                        var_20[0xc] = i
                        edx_2 = 0
                        var_8 = 0
                        j = 0
                        *ecx = 0xa
                        goto label_725600
                    case 0xa
                    label_725600:
                        
                        if (ecx[3] == 0)
                            var_20[3] = var_2c
                            var_20[4] = j_10
                            *var_20 = edi_3
                            var_20[1] = j_14
                            var_c_1[0xf] = j
                            var_c_1[0xe] = edx_2
                            return 2
                        
                        void* eax_80 = sub_7247a0(i, nullptr, 0, 0)
                        ecx = var_c_1
                        ecx[6] = eax_80
                        var_20[0xc] = eax_80
                        edx_2 = var_8
                        *ecx = 0xb
                    label_725630:
                        
                        if (arg2 == 5 || arg2 == 6)
                            goto label_7253a8
                        
                        goto label_725642
                    case 0xb
                        goto label_725630
                    case 0xc
                    label_725642:
                        
                        if (ecx[1] == 0)
                            if (j u< 3)
                                do
                                    if (j_14 == 0)
                                        goto label_7253a8
                                    
                                    j_14 -= 1
                                    edx_2 += zx.d(*edi_3) << j.b
                                    j_16 = j_14
                                    edi_3 = &edi_3[1]
                                    var_8 = edx_2
                                    j += 8
                                    var_14 = edi_3
                                while (j u< 3)
                                
                                ecx = var_c_1
                            
                            uint32_t edx_33 = edx_2 u>> 1
                            ecx[1] = edx_2 & 1
                            int32_t eax_87 = edx_33 & 3
                            
                            if (eax_87 u> 3)
                                goto label_725726
                            
                            switch (eax_87)
                                case 0
                                    edx_2 = edx_33 u>> 2
                                    j -= 3
                                    *ecx = 0xd
                                    var_8 = edx_2
                                    j_4 = j
                                case 1
                                    ecx[0x13] = 0xadca50
                                    ecx[0x15] = 9
                                    ecx[0x14] = 0xadd278
                                    ecx[0x16] = 5
                                    *ecx = 0x13
                                    
                                    if (arg2 != 6)
                                        goto label_725726
                                    
                                    j -= 3
                                    var_8 = edx_33 u>> 2
                                    goto label_7253a8
                                case 2
                                    edx_2 = edx_33 u>> 2
                                    j -= 3
                                    *ecx = 0x10
                                    var_8 = edx_2
                                    j_4 = j
                                case 3
                                    var_20[6] = "invalid block type"
                                    *ecx = 0x1d
                                label_725726:
                                    edx_2 = edx_33 u>> 2
                                    j -= 3
                                    var_8 = edx_2
                                    j_4 = j
                        else
                            int32_t ecx_37 = j & 7
                            edx_2 u>>= ecx_37.b
                            j -= ecx_37
                            ecx = var_c_1
                            var_8 = edx_2
                            j_4 = j
                            *ecx = 0x1a
                    case 0xd
                        int32_t ecx_40 = j & 7
                        j -= ecx_40
                        edx_2 u>>= ecx_40.b
                        var_8 = edx_2
                        j_4 = j
                        
                        while (j u< 0x20)
                            if (j_14 == 0)
                                goto label_7253a8
                            
                            uint32_t eax_90 = zx.d(*edi_3) << j.b
                            j += 8
                            j_14 -= 1
                            j_4 = j
                            edx_2 += eax_90
                            j_16 = j_14
                            edi_3 = &edi_3[1]
                            var_8 = edx_2
                            var_14 = edi_3
                        
                        uint32_t ecx_43 = zx.d(edx_2.w)
                        ecx = var_c_1
                        
                        if (ecx_43 == not.d(edx_2) u>> 0x10)
                            edx_2 = 0
                            j = 0
                            ecx[0x10] = ecx_43
                            var_8 = 0
                            j_4 = 0
                            *ecx = 0xe
                            
                            if (arg2 == 6)
                                goto label_7253a8
                            
                            goto label_7257c5
                        
                        var_20[6] = "invalid stored block lengths"
                        *ecx = 0x1d
                    case 0xe
                    label_7257c5:
                        *ecx = 0xf
                    label_7257cb:
                        void* j_13 = ecx[0x10]
                        
                        if (j_13 == 0)
                            *ecx = 0xb
                        else
                            if (j_13 u> j_14)
                                j_13 = j_14
                            
                            if (j_13 u> j_10)
                                j_13 = j_10
                            
                            if (j_13 == 0)
                                goto label_7253a8
                            
                            sub_726520(j_13.b, edi_3, var_2c, j_13)
                            ecx = var_c_1
                            j_14 -= j_13
                            j_10 -= j_13
                            edi_3 += j_13
                            var_2c += j_13
                            j_16 = j_14
                            ecx[0x10] -= j_13
                            var_14 = edi_3
                            edx_2 = var_8
                    case 0xf
                        goto label_7257cb
                    case 0x10
                        if (j u< 0xe)
                            do
                                if (j_14 == 0)
                                    goto label_7253a8
                                
                                j_14 -= 1
                                edx_2 += zx.d(*edi_3) << j.b
                                j_16 = j_14
                                edi_3 = &edi_3[1]
                                var_8 = edx_2
                                j += 8
                                var_14 = edi_3
                            while (j u< 0xe)
                            
                            ecx = var_c_1
                        
                        j -= 0xe
                        uint32_t edx_36 = edx_2 u>> 5
                        j_4 = j
                        ecx[0x18] = (edx_2 & 0x1f) + 0x101
                        uint32_t edx_37 = edx_36 u>> 5
                        ecx[0x19] = (edx_36 & 0x1f) + 1
                        edx_2 = edx_37 u>> 4
                        var_8 = edx_2
                        bool cond:2_1 = ecx[0x18] u> 0x11e
                        ecx[0x17] = (edx_37 & 0xf) + 4
                        
                        if (cond:2_1 || ecx[0x19] u> 0x1e)
                            var_20[6] = "too many length or distance symbols"
                            *ecx = 0x1d
                        else
                            ecx[0x1a] = 0
                            *ecx = 0x11
                        label_7258a4:
                            
                            while (ecx[0x1a] u< ecx[0x17])
                                while (j u< 3)
                                    if (j_14 == 0)
                                        goto label_7253a8
                                    
                                    j_14 -= 1
                                    edx_2 += zx.d(*edi_3) << j.b
                                    j_16 = j_14
                                    edi_3 = &edi_3[1]
                                    var_8 = edx_2
                                    j += 8
                                    var_14 = edi_3
                                
                                int16_t ecx_48 = edx_2.w & 7
                                edx_2 u>>= 3
                                j -= 3
                                var_8 = edx_2
                                j_4 = j
                                *(var_c_1 + (zx.d(*((var_c_1[0x1a] << 1) + &data_add250)) << 1)
                                    + 0x70) = ecx_48
                                ecx = var_c_1
                                edi_3 = var_14
                                ecx[0x1a] += 1
                            
                            while (ecx[0x1a] u< 0x13)
                                *(ecx + (zx.d(*((ecx[0x1a] << 1) + &data_add250)) << 1) + 0x70) = 0
                                ecx[0x1a] += 1
                            
                            var_c_1[0x13] = &ecx[0x14c]
                            ecx[0x1b] = &ecx[0x14c]
                            var_c_1[0x15] = 7
                            int32_t result_1 = sub_7282b0(&var_c_1[0x15], &var_c_1[0x1c], 0, 0x13, 
                                &ecx[0x1b], &var_c_1[0x15], &var_c_1[0xbc])
                            ecx = var_c_1
                            result = result_1
                            
                            if (result_1 == 0)
                                ecx[0x1a] = 0
                                *ecx = 0x12
                            label_7259b5:
                                int32_t j_7 = ecx[0x1a]
                                int32_t j_3 = j_7
                                
                                if (j_7 u< ecx[0x19] + ecx[0x18])
                                    int32_t j_1
                                    
                                    do
                                        int32_t eax_128 = *(var_c_1[0x13]
                                            + ((((1 << (*edi_1).b) - 1) & var_8) << 2))
                                        int32_t var_44_7 = eax_128
                                        
                                        while (zx.d((eax_128 u>> 8).b) u> j)
                                            if (j_14 == 0)
                                                goto label_7253a8
                                            
                                            var_8 += zx.d(*edi_3) << j.b
                                            j_14 -= 1
                                            edi_3 = &edi_3[1]
                                            j += 8
                                            j_16 = j_14
                                            var_14 = edi_3
                                            eax_128 = *(var_c_1[0x13]
                                                + ((((1 << (*edi_1).b) - 1) & var_8) << 2))
                                            var_44_7 = eax_128
                                        
                                        uint16_t edx_47 = (eax_128 u>> 0x10).w
                                        
                                        if (edx_47 u>= 0x10)
                                            int16_t var_44_9
                                            int32_t k_2
                                            
                                            if (edx_47 != 0x10)
                                                uint32_t edx_51 = var_8
                                                uint32_t ecx_68 = zx.d(eax_128:1.b)
                                                int32_t eax_142
                                                
                                                if (var_44_7:2.w != 0x11)
                                                    uint32_t var_1c_1 = ecx_68
                                                    
                                                    while (j u< ecx_68 + 7)
                                                        if (j_14 == 0)
                                                            goto label_7253a8
                                                        
                                                        j_14 -= 1
                                                        ecx_68 = var_1c_1
                                                        edx_51 += zx.d(*edi_3) << j.b
                                                        edi_3 = &edi_3[1]
                                                        j_16 = j_14
                                                        j += 8
                                                        var_8 = edx_51
                                                        var_14 = edi_3
                                                    
                                                    uint32_t edx_53 = edx_51 u>> ecx_68.b
                                                    edx_2 = edx_53 u>> 7
                                                    k_2 = (edx_53 & 0x7f) + 0xb
                                                    eax_142 = 0xfffffff9 - var_1c_1
                                                else
                                                    uint32_t var_1c = ecx_68
                                                    
                                                    while (j u< ecx_68 + 3)
                                                        if (j_14 == 0)
                                                            goto label_7253a8
                                                        
                                                        j_14 -= 1
                                                        ecx_68 = var_1c
                                                        edx_51 += zx.d(*edi_3) << j.b
                                                        edi_3 = &edi_3[1]
                                                        j_16 = j_14
                                                        j += 8
                                                        var_8 = edx_51
                                                        var_14 = edi_3
                                                    
                                                    uint32_t edx_52 = edx_51 u>> ecx_68.b
                                                    edx_2 = edx_52 u>> 3
                                                    k_2 = (edx_52 & 7) + 3
                                                    eax_142 = 0xfffffffd - var_1c
                                                
                                                j += eax_142
                                                var_44_9 = 0
                                            else
                                                while (j u< zx.d((eax_128 u>> 8).b) + 2)
                                                    if (j_14 == 0)
                                                        goto label_7253a8
                                                    
                                                    j_14 -= 1
                                                    var_8 += zx.d(*edi_3) << j.b
                                                    edi_3 = &edi_3[1]
                                                    j += 8
                                                    j_16 = j_14
                                                    var_14 = edi_3
                                                
                                                uint32_t ecx_65 = zx.d(eax_128:1.b)
                                                j -= ecx_65
                                                edx_2 = var_8 u>> ecx_65.b
                                                ecx = var_c_1
                                                var_8 = edx_2
                                                j_4 = j
                                                
                                                if (j_3 == 0)
                                                    var_20[6] = "invalid bit length repeat"
                                                    *ecx = 0x1d
                                                    goto label_72597c
                                                
                                                int32_t ecx_67 = edx_2 & 3
                                                edx_2 u>>= 2
                                                k_2 = ecx_67 + 3
                                                var_44_9 = *(ecx + (j_3 << 1) + 0x6e)
                                                j -= 2
                                            
                                            edi_3 = var_14
                                            ecx = var_c_1
                                            var_8 = edx_2
                                            j_4 = j
                                            
                                            if (k_2 + j_3 u> var_c_1[0x19] + var_c_1[0x18])
                                                var_20[6] = "invalid bit length repeat"
                                                *ecx = 0x1d
                                                goto label_72597c
                                            
                                            int32_t k_1 = k_2
                                            
                                            if (k_1 != 0)
                                                int32_t k
                                                
                                                do
                                                    *(ecx + (ecx[0x1a] << 1) + 0x70) = var_44_9
                                                    ecx[0x1a] += 1
                                                    k = k_1
                                                    k_1 -= 1
                                                while (k != 1)
                                                j_14 = j_16
                                        else
                                            uint32_t ecx_59 = zx.d((eax_128 u>> 8).b)
                                            var_8 u>>= ecx_59.b
                                            j -= ecx_59
                                            ecx = var_c_1
                                            j_4 = j
                                            *(ecx + (j_3 << 1) + 0x70) = edx_47
                                            ecx[0x1a] += 1
                                        
                                        j_1 = ecx[0x1a]
                                        j_3 = j_1
                                    while (j_1 u< ecx[0x19] + ecx[0x18])
                                
                                if (*ecx == 0x1d)
                                    edx_2 = var_8
                                else if (ecx[0x9c].w != 0)
                                    void* edx_54 = &ecx[0x1b]
                                    ecx[0x15] = 9
                                    *edx_54 = &ecx[0x14c]
                                    ecx[0x13] = &ecx[0x14c]
                                    int32_t result_2 = sub_7282b0(&ecx[0x15], &ecx[0x1c], 1, 
                                        ecx[0x18], edx_54, &ecx[0x15], &ecx[0xbc])
                                    ecx = var_c_1
                                    result = result_2
                                    
                                    if (result_2 == 0)
                                        ecx[0x16] = 6
                                        ecx[0x14] = *edx_54
                                        int32_t eax_163 = ecx[0x18]
                                        int32_t result_3 = sub_7282b0(eax_163, 
                                            &ecx[0x1c] + (eax_163 << 1), 2, ecx[0x19], edx_54, 
                                            &ecx[0x16], &ecx[0xbc])
                                        ecx = var_c_1
                                        result = result_3
                                        
                                        if (result_3 == 0)
                                            edx_24 = arg2
                                            *ecx = 0x13
                                            
                                            if (edx_24 == 6)
                                                j_20 = j_16
                                                goto label_7253b7
                                            
                                            edx_2 = var_8
                                        label_725cc7:
                                            *ecx = 0x14
                                        label_725ccd:
                                            
                                            if (j_14 u< 6 || j_10 u< 0x102)
                                                int32_t eax_167 = ecx[0x13]
                                                ecx[0x6f1] = 0
                                                int32_t eax_171 = *(eax_167
                                                    + ((((1 << (*edi_1).b) - 1) & edx_2) << 2))
                                                
                                                while (zx.d((eax_171 u>> 8).b) u> j)
                                                    if (j_14 == 0)
                                                        goto label_7253a8
                                                    
                                                    j_14 -= 1
                                                    uint32_t edx_59 = edx_2 + (zx.d(*edi_3) << j.b)
                                                    j_16 = j_14
                                                    edi_3 = &edi_3[1]
                                                    var_8 = edx_59
                                                    j += 8
                                                    var_14 = edi_3
                                                    eax_171 = *(var_c_1[0x13]
                                                        + ((((1 << (*edi_1).b) - 1) & var_8) << 2))
                                                    edx_2 = var_8
                                                
                                                if (eax_171.b != 0 && (eax_171.b & 0xf0) == 0)
                                                    uint8_t ecx_92 = (eax_171 u>> 8).b
                                                    int32_t edx_63 = eax_171
                                                    eax_171 = *(eax_167 + ((((((1
                                                        << (eax_171.b + ecx_92)) - 1) & var_8)
                                                        u>> ecx_92) + (eax_171 u>> 0x10)) << 2))
                                                    
                                                    if (zx.d((eax_171 u>> 8).b) + zx.d(ecx_92) u> j)
                                                        uint32_t ebx_11
                                                        
                                                        do
                                                            j_20 = j_16
                                                            
                                                            if (j_20 == 0)
                                                                goto label_7253ab
                                                            
                                                            j_16 = j_20 - 1
                                                            char ecx_101 = j.b
                                                            j += 8
                                                            var_8 += zx.d(*var_14) << ecx_101
                                                            var_14 = &var_14[1]
                                                            ebx_11 = zx.d(edx_63:1.b)
                                                            eax_171 = *(var_c_1[0x13] + ((((((1
                                                                << (edx_63.b + ebx_11.b)) - 1) & var_8)
                                                                u>> ebx_11.b) + zx.d(edx_63:2.w))
                                                                << 2))
                                                        while (zx.d((eax_171 u>> 8).b) + ebx_11
                                                            u> j)
                                                    
                                                    uint32_t ecx_109 = zx.d(edx_63:1.b)
                                                    edx_2 = var_8 u>> ecx_109.b
                                                    j -= ecx_109
                                                    var_c_1[0x6f1] = ecx_109
                                                    j_14 = j_16
                                                
                                                uint32_t ecx_112 = zx.d((eax_171 u>> 8).b)
                                                edx_2 u>>= ecx_112.b
                                                j -= ecx_112
                                                var_c_1[0x6f1] += ecx_112
                                                var_c_1[0x10] = eax_171 u>> 0x10
                                                edi_3 = var_14
                                                ecx = var_c_1
                                                var_8 = edx_2
                                                j_4 = j
                                                
                                                if (eax_171.b == 0)
                                                    *ecx = 0x19
                                                else if ((eax_171.b & 0x20) == 0)
                                                    if ((eax_171.b & 0x40) == 0)
                                                        *ecx = 0x15
                                                        ecx[0x12] = zx.d(eax_171.b) & 0xf
                                                    label_725ef6:
                                                        int32_t eax_187 = ecx[0x12]
                                                        
                                                        if (eax_187 != 0)
                                                            while (j u< eax_187)
                                                                if (j_14 == 0)
                                                                    goto label_7253a8
                                                                
                                                                j_14 -= 1
                                                                edx_2 += zx.d(*edi_3) << j.b
                                                                j_16 = j_14
                                                                edi_3 = &edi_3[1]
                                                                var_8 = edx_2
                                                                j += 8
                                                                var_14 = edi_3
                                                            
                                                            var_c_1[0x10] +=
                                                                ((1 << eax_187.b) - 1) & edx_2
                                                            edx_2 u>>= eax_187.b
                                                            j -= eax_187
                                                            ecx = var_c_1
                                                            var_8 = edx_2
                                                            ecx[0x6f1] += eax_187
                                                        
                                                        ecx[0x6f2] = ecx[0x10]
                                                        *ecx = 0x16
                                                        goto label_725f5f
                                                    
                                                    var_20[6] = "invalid literal/length code"
                                                    *ecx = 0x1d
                                                else
                                                    ecx[0x6f1] = 0xffffffff
                                                    *ecx = 0xb
                                            else
                                                var_20[3] = var_2c
                                                var_20[4] = j_10
                                                *var_20 = var_14
                                                var_20[1] = j_14
                                                ecx[0xe] = edx_2
                                                ecx[0xf] = j
                                                sub_727e80(var_20, j_12)
                                                edi_3 = *var_20
                                                j_14 = var_20[1]
                                                var_2c = var_20[3]
                                                j_10 = var_20[4]
                                                ecx = var_c_1
                                                var_14 = edi_3
                                                j_16 = j_14
                                                edx_2 = ecx[0xe]
                                                j = ecx[0xf]
                                                var_8 = edx_2
                                                j_4 = j
                                                
                                                if (*ecx == 0xb)
                                                    ecx[0x6f1] = 0xffffffff
                                        else
                                            var_20[6] = "invalid distances set"
                                            *ecx = 0x1d
                                            edx_2 = var_8
                                    else
                                        var_20[6] = "invalid literal/lengths set"
                                        *ecx = 0x1d
                                        edx_2 = var_8
                                else
                                    var_20[6] = "invalid code -- missing end-of-block"
                                    *ecx = 0x1d
                                    edx_2 = var_8
                            else
                                var_20[6] = "invalid code lengths set"
                                *ecx = 0x1d
                                edx_2 = var_8
                    case 0x11
                        goto label_7258a4
                    case 0x12
                        goto label_7259b5
                    case 0x13
                        goto label_725cc7
                    case 0x14
                        goto label_725ccd
                    case 0x15
                        goto label_725ef6
                    case 0x16
                    label_725f5f:
                        int32_t eax_195 = ecx[0x14]
                        int32_t eax_199 = *(eax_195 + ((((1 << (*edi_2).b) - 1) & edx_2) << 2))
                        
                        while (zx.d((eax_199 u>> 8).b) u> j)
                            if (j_14 == 0)
                                goto label_7253a8
                            
                            j_14 -= 1
                            uint32_t edx_65 = edx_2 + (zx.d(*edi_3) << j.b)
                            j_16 = j_14
                            edi_3 = &edi_3[1]
                            var_8 = edx_65
                            j += 8
                            var_14 = edi_3
                            eax_199 = *(var_c_1[0x14] + ((((1 << (*edi_2).b) - 1) & var_8) << 2))
                            edx_2 = var_8
                        
                        int32_t* ebx_21
                        
                        if ((eax_199.b & 0xf0) != 0)
                            ebx_21 = var_c_1
                        else
                            uint8_t ecx_131 = (eax_199 u>> 8).b
                            int32_t edx_69 = eax_199
                            eax_199 = *(eax_195 + ((((((1 << (eax_199.b + ecx_131)) - 1) & var_8)
                                u>> ecx_131) + (eax_199 u>> 0x10)) << 2))
                            
                            if (zx.d((eax_199 u>> 8).b) + zx.d(ecx_131) u> j)
                                uint32_t ebx_20
                                
                                do
                                    j_20 = j_16
                                    
                                    if (j_20 == 0)
                                        goto label_7253ab
                                    
                                    j_16 = j_20 - 1
                                    char ecx_140 = j.b
                                    j += 8
                                    var_8 += zx.d(*var_14) << ecx_140
                                    var_14 = &var_14[1]
                                    ebx_20 = zx.d(edx_69:1.b)
                                    eax_199 = *(var_c_1[0x14] + ((((((1 << (edx_69.b + ebx_20.b))
                                        - 1) & var_8) u>> ebx_20.b) + zx.d(edx_69:2.w)) << 2))
                                while (zx.d((eax_199 u>> 8).b) + ebx_20 u> j)
                            
                            ebx_21 = var_c_1
                            uint32_t ecx_148 = zx.d(edx_69:1.b)
                            j -= ecx_148
                            edx_2 = var_8 u>> ecx_148.b
                            ebx_21[0x6f1] += ecx_148
                        
                        edi_3 = var_14
                        uint32_t ecx_151 = zx.d((eax_199 u>> 8).b)
                        ebx_21[0x6f1] += ecx_151
                        j -= ecx_151
                        edx_2 u>>= ecx_151.b
                        var_8 = edx_2
                        j_4 = j
                        
                        if ((eax_199.b & 0x40) == 0)
                            ebx_21[0x11] = eax_199 u>> 0x10
                            ecx = var_c_1
                            j_14 = j_16
                            ecx[0x12] = zx.d(eax_199.b) & 0xf
                            *ecx = 0x17
                        label_7260e6:
                            int32_t eax_215 = ecx[0x12]
                            
                            if (eax_215 != 0)
                                while (j u< eax_215)
                                    if (j_14 == 0)
                                        goto label_7253a8
                                    
                                    j_14 -= 1
                                    edx_2 += zx.d(*edi_3) << j.b
                                    j_16 = j_14
                                    edi_3 = &edi_3[1]
                                    var_8 = edx_2
                                    j += 8
                                    var_14 = edi_3
                                
                                var_c_1[0x11] += ((1 << eax_215.b) - 1) & edx_2
                                edx_2 u>>= eax_215.b
                                j -= eax_215
                                ecx = var_c_1
                                var_8 = edx_2
                                j_4 = j
                                ecx[0x6f1] += eax_215
                            
                            *ecx = 0x18
                            goto label_726149
                        
                        ecx = var_c_1
                        j_14 = j_16
                        var_20[6] = "invalid distance code"
                        *ecx = 0x1d
                    case 0x17
                        goto label_7260e6
                    case 0x18
                    label_726149:
                        
                        if (j_10 == 0)
                            goto label_7253a8
                        
                        int32_t eax_223 = j_12 - j_10
                        int32_t eax_224 = ecx[0x11]
                        void* j_8
                        void* var_34_6
                        void* j_6
                        
                        if (eax_224 u<= eax_223)
                            var_34_6 = var_2c - eax_224
                            j_6 = ecx[0x10]
                            j_8 = j_6
                        label_7261cc:
                            
                            if (j_6 u> j_10)
                                j_6 = j_10
                            
                            void* j_9 = j_6
                            j_10 -= j_6
                            void* j_5 = j_6
                            ecx[0x10] = j_8 - j_6
                            char* ecx_158 = var_2c
                            char* ebx_31 = var_34_6 - ecx_158
                            void* j_2
                            
                            do
                                j_6.b = *(ebx_31 + ecx_158)
                                *ecx_158 = j_6.b
                                ecx_158 = &ecx_158[1]
                                j_2 = j_5
                                j_5 -= 1
                            while (j_2 != 1)
                            j_14 = j_16
                            edi_3 = var_14
                            var_2c = ecx_158
                            ecx = var_c_1
                            
                            if (ecx[0x10] == 0)
                                *ecx = 0x14
                        else
                            j_6 = eax_224 - eax_223
                            
                            if (j_6 u<= ecx[0xb] || ecx[0x6f0] == 0)
                                if (j_6 u<= ecx[0xc])
                                    var_34_6 = ecx[0xd] - j_6 + ecx[0xc]
                                else
                                    j_6 -= ecx[0xc]
                                    var_34_6 = ecx[0xd] + ecx[0xa] - j_6
                                
                                void* j_11 = ecx[0x10]
                                j_8 = j_11
                                
                                if (j_6 u> j_11)
                                    j_6 = j_11
                                
                                goto label_7261cc
                            
                            var_20[6] = "invalid distance too far back"
                            *ecx = 0x1d
                    case 0x19
                        if (j_10 == 0)
                            goto label_7253a8
                        
                        char* edi_33 = var_2c
                        i.b = ecx[0x10].b
                        var_2c = &var_2c[1]
                        j_10 -= 1
                        *edi_33 = i.b
                        edi_3 = var_14
                        *ecx = 0x14
                    case 0x1a
                        if (ecx[2] == 0)
                            goto label_726320
                        
                        if (j u< 0x20)
                            do
                                if (j_14 == 0)
                                    goto label_7253a8
                                
                                uint32_t eax_227 = zx.d(*edi_3) << j.b
                                j += 8
                                j_14 -= 1
                                j_4 = j
                                edx_2 += eax_227
                                j_16 = j_14
                                edi_3 = &edi_3[1]
                                var_8 = edx_2
                                var_14 = edi_3
                            while (j u< 0x20)
                            
                            ecx = var_c_1
                        
                        uint32_t var_30 = j_12 - j_10
                        var_20[5] = &var_20[5][var_30]
                        ecx[7] += var_30
                        edi_3 = var_14
                        
                        if (var_30 != 0)
                            char* edx_72 = var_2c - var_30
                            int32_t ecx_160 = ecx[6]
                            int32_t eax_231
                            
                            if (ecx[4] == 0)
                                eax_231 = sub_7247a0(var_30, edx_72, ecx_160, var_30)
                            else
                                eax_231 = sub_724a10(var_30, edx_72, ecx_160, var_30)
                            
                            ecx = var_c_1
                            ecx[6] = eax_231
                            var_20[0xc] = eax_231
                            edx_2 = var_8
                        
                        j_12 = j_10
                        uint32_t eax_233 = edx_2
                        
                        if (ecx[4] == 0)
                            eax_233 = (((eax_233 & 0xff00) + (edx_2 << 0x10)) << 8)
                                + (edx_2 u>> 8 & 0xff00) + (edx_2 u>> 0x18)
                        
                        if (eax_233 == ecx[6])
                            edx_2 = 0
                            j = 0
                            var_8 = 0
                            j_4 = 0
                        label_726320:
                            *ecx = 0x1b
                        label_726326:
                            
                            if (ecx[2] == 0 || ecx[4] == 0)
                                goto label_7263b6
                            
                            if (j u< 0x20)
                                do
                                    if (j_14 == 0)
                                        goto label_7253a8
                                    
                                    uint32_t eax_244 = zx.d(*edi_3) << j.b
                                    j += 8
                                    j_14 -= 1
                                    j_4 = j
                                    edx_2 += eax_244
                                    j_16 = j_14
                                    edi_3 = &edi_3[1]
                                    var_8 = edx_2
                                    var_14 = edi_3
                                while (j u< 0x20)
                                
                                ecx = var_c_1
                            
                            if (edx_2 == ecx[7])
                                var_8 = 0
                                j = 0
                            label_7263b6:
                                *ecx = 0x1c
                            label_7263bc:
                                result = 1
                            label_7253a8:
                                j_20 = j_16
                            label_7253ab:
                                edx_24 = arg2
                            label_7253b7:
                                var_20[3] = var_2c
                                var_20[4] = j_10
                                var_20[1] = j_20
                                *var_20 = var_14
                                bool cond:19_1 = var_c_1[0xa] != 0
                                var_c_1[0xf] = j
                                var_c_1[0xe] = var_8
                                
                                if (cond:19_1)
                                label_725401:
                                    void* eax_58 = j_12 - var_20[4]
                                    
                                    if (sub_724ce0(eax_58, var_20[3], var_20, eax_58) == 0)
                                        goto label_7263df
                                    
                                    *var_c_1 = 0x1e
                                    return 0xfffffffc
                                
                                if (j_12 != var_20[4])
                                    int32_t eax_56 = *var_c_1
                                    
                                    if (eax_56 s>= 0x1d || (eax_56 s>= 0x1a && edx_24 == 4))
                                        goto label_7263df
                                    
                                    goto label_725401
                                
                            label_7263df:
                                void* eax_249 = j_15 - var_20[1]
                                uint32_t esi_9 = j_12 - var_20[4]
                                var_20[2] += eax_249
                                var_20[5] = &var_20[5][esi_9]
                                var_c_1[7] += esi_9
                                
                                if (var_c_1[2] != 0 && esi_9 != 0)
                                    int32_t ecx_165 = var_c_1[6]
                                    char* edx_75 = var_20[3] - esi_9
                                    int32_t eax_250
                                    
                                    if (var_c_1[4] == 0)
                                        eax_250 = sub_7247a0(eax_249, edx_75, ecx_165, esi_9)
                                    else
                                        eax_250 = sub_724a10(eax_249, edx_75, ecx_165, esi_9)
                                    
                                    var_c_1[6] = eax_250
                                    var_20[0xc] = eax_250
                                
                                int32_t edx_76 = *var_c_1
                                int32_t esi_10
                                
                                if (edx_76 == 0x13 || edx_76 == 0xe)
                                    esi_10 = 0x100
                                else
                                    esi_10 = 0
                                
                                int32_t ecx_166 = var_c_1[1]
                                int32_t ecx_167 = neg.d(ecx_166)
                                int32_t eax_251 = 0
                                
                                if (edx_76 == 0xb)
                                    eax_251 = 0x80
                                
                                var_20[0xb] = eax_251
                                    + (sbb.d(ecx_167, ecx_167, ecx_166 != 0) & 0x40) + esi_10
                                    + var_c_1[0xf]
                                
                                if ((eax_249 != 0 || esi_9 != eax_249) && arg2 != 4)
                                    return result
                                
                                if (result == 0)
                                    return 0xfffffffb
                                
                                return result
                            
                            var_20[6] = "incorrect length check"
                            *ecx = 0x1d
                        else
                            var_20[6] = "incorrect data check"
                            *ecx = 0x1d
                    case 0x1b
                        goto label_726326
                    case 0x1c
                        goto label_7263bc
                    case 0x1d
                        result = 0xfffffffd
                        goto label_7253a8
                    case 0x1e
                        return 0xfffffffc
                
            label_72597c:
                i = *ecx
            while (i u<= 0x1e)

return 0xfffffffe
