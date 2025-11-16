// 函数: sub_6d2170
// 地址: 0x6d2170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *(arg4 + 0x190)
int32_t ecx_2 = *(arg4 + 0x78) u>> 0xd & 1
char* edi = arg2
uint32_t edx = *(arg4 + 0x188)
int32_t i_21 = *arg3
uint32_t result = arg4
int32_t i_25 = i_21
uint32_t edx_2

switch (zx.d(arg3[2].b))
    case 0
        switch (zx.d(*(arg3 + 9)) - 1)
            case 0
                uint32_t ecx_7 = 7
                arg4 = 7
                
                if (i_21 != 0)
                    int16_t esi_1 = *(result + 0x1b8)
                    int32_t i
                    
                    do
                        edx_2:1.b = *edi
                        edx_2.b = edx_2:1.b
                        edx_2.b u>>= ecx_7.b
                        edx_2.b &= 1
                        uint32_t ecx_10
                        
                        if (zx.w(edx_2.b) != esi_1)
                            ecx_10 = arg4
                        else
                            edx_2.b = *(result + 0x168)
                            ecx_10 = arg4
                            char ebx = (0x7f7f s>> (7 - arg4.b)).b & edx_2:1.b
                            edx_2.b <<= ecx_10.b
                            *edi = ebx | edx_2.b
                            i_21 = i_25
                        
                        if (ecx_10 != 0)
                            ecx_7 = ecx_10 - 1
                        else
                            ecx_7 = 7
                            edi = &edi[1]
                        
                        i = i_21
                        i_21 -= 1
                        arg4 = ecx_7
                        i_25 = i_21
                    while (i != 1)
            case 1
                uint32_t ecx_11 = 6
                
                if (edx == 0)
                    arg4 = 6
                    
                    if (i_21 != 0)
                        int16_t esi_2 = *(result + 0x1b8)
                        int32_t i_22 = i_21
                        int32_t i_1
                        
                        do
                            edx_2:1.b = *edi
                            edx_2.b = edx_2:1.b
                            edx_2.b u>>= ecx_11.b
                            edx_2.b &= 3
                            uint32_t ecx_24
                            
                            if (zx.w(edx_2.b) != esi_2)
                                ecx_24 = arg4
                            else
                                edx_2.b = *(result + 0x168)
                                ecx_24 = arg4
                                char ebx_4 = (0x3f3f s>> (6 - arg4.b)).b & edx_2:1.b
                                edx_2.b <<= ecx_24.b
                                *edi = ebx_4 | edx_2.b
                                i_22 = i_25
                            
                            if (ecx_24 != 0)
                                ecx_11 = ecx_24 - 2
                            else
                                ecx_11 = 6
                                edi = &edi[1]
                            
                            i_1 = i_22
                            i_22 -= 1
                            arg4 = ecx_11
                            i_25 = i_22
                        while (i_1 != 1)
                else
                    uint32_t var_10_1 = 6
                    
                    if (i_21 != 0)
                        int32_t i_23 = i_21
                        int16_t var_18_2 = *(result + 0x1b8)
                        uint32_t ebx_1 = 6
                        int32_t i_2
                        
                        do
                            edx_2:1.b = *edi
                            uint32_t ecx_12
                            ecx_12.b = ebx_1.b
                            edx_2.b = edx_2:1.b
                            arg4:3.b = edx_2:1.b
                            edx_2.b u>>= ecx_12.b
                            edx_2.b &= 3
                            char ebx_2
                            
                            if (zx.w(edx_2.b) != var_18_2)
                                uint16_t ecx_13
                                ecx_13.b = ebx_1.b
                                int32_t edx_5 = zx.d(edx_2:1.b) u>> ecx_13.b & 3
                                ebx_2 = (0x3f3f s>> (6 - ebx_1.b)).b & arg4:3.b
                                edx_2.b = *((((edx_5 << 2 | edx_5) << 2 | edx_5) << 2 | edx_5)
                                    + *(result + 0x188))
                                edx_2.b u>>= 6
                            else
                                edx_2.b = *(result + 0x168)
                                ebx_2 = (0x3f3f s>> (6 - ebx_1.b)).b & edx_2:1.b
                            
                            edx_2.b <<= var_10_1.b
                            *edi = ebx_2 | edx_2.b
                            
                            if (var_10_1 != 0)
                                ebx_1 = var_10_1 - 2
                            else
                                ebx_1 = var_10_1 + 6
                                edi = &edi[1]
                            
                            var_10_1 = ebx_1
                            i_2 = i_23
                            i_23 -= 1
                        while (i_2 != 1)
            case 3
                uint32_t ecx_25 = 4
                
                if (edx == 0)
                    arg4 = 4
                    
                    if (i_21 != 0)
                        int16_t esi_3 = *(result + 0x1b8)
                        int32_t i_3
                        
                        do
                            edx_2:1.b = *edi
                            edx_2.b = edx_2:1.b
                            edx_2.b u>>= ecx_25.b
                            edx_2.b &= 0xf
                            uint32_t ecx_35
                            
                            if (zx.w(edx_2.b) != esi_3)
                                ecx_35 = arg4
                            else
                                edx_2.b = *(result + 0x168)
                                ecx_35 = arg4
                                char ebx_8 = (0xf0f s>> (4 - arg4.b)).b & edx_2:1.b
                                edx_2.b <<= ecx_35.b
                                *edi = ebx_8 | edx_2.b
                                i_21 = i_25
                            
                            if (ecx_35 != 0)
                                ecx_25 = ecx_35 - 4
                            else
                                ecx_25 = 4
                                edi = &edi[1]
                            
                            i_3 = i_21
                            i_21 -= 1
                            arg4 = ecx_25
                            i_25 = i_21
                        while (i_3 != 1)
                else
                    uint32_t var_10_2 = 4
                    
                    if (i_21 != 0)
                        int32_t i_24 = i_21
                        int16_t var_18_3 = *(result + 0x1b8)
                        uint32_t ebx_5 = 4
                        int32_t i_4
                        
                        do
                            edx_2:1.b = *edi
                            uint32_t ecx_26
                            ecx_26.b = ebx_5.b
                            edx_2.b = edx_2:1.b
                            arg4:3.b = edx_2:1.b
                            edx_2.b u>>= ecx_26.b
                            edx_2.b &= 0xf
                            char ebx_6
                            
                            if (zx.w(edx_2.b) != var_18_3)
                                uint16_t ecx_27
                                ecx_27.b = ebx_5.b
                                int32_t edx_8 = zx.d(edx_2:1.b) u>> ecx_27.b & 0xf
                                ebx_6 = (0xf0f s>> (4 - ebx_5.b)).b & arg4:3.b
                                edx_2.b = *((edx_8 << 4 | edx_8) + *(result + 0x188))
                                edx_2.b u>>= 4
                            else
                                edx_2.b = *(result + 0x168)
                                ebx_6 = (0xf0f s>> (4 - ebx_5.b)).b & edx_2:1.b
                            
                            edx_2.b <<= var_10_2.b
                            *edi = ebx_6 | edx_2.b
                            
                            if (var_10_2 != 0)
                                ebx_5 = var_10_2 - 4
                            else
                                ebx_5 = var_10_2 + 4
                                edi = &edi[1]
                            
                            var_10_2 = ebx_5
                            i_4 = i_24
                            i_24 -= 1
                        while (i_4 != 1)
            case 7
                if (edx == 0)
                    if (i_21 != 0)
                        int16_t edx_9 = *(result + 0x1b8)
                        int32_t i_5
                        
                        do
                            if (zx.w(*edi) == edx_9)
                                uint16_t ecx_36
                                ecx_36.b = *(result + 0x168)
                                *edi = ecx_36.b
                            
                            edi = &edi[1]
                            i_5 = i_21
                            i_21 -= 1
                        while (i_5 != 1)
                else if (i_21 != 0)
                    int16_t esi_4 = *(result + 0x1b8)
                    int32_t i_6
                    
                    do
                        uint32_t ecx_6
                        ecx_6.b = *edi
                        arg4:3.b = ecx_6.b
                        
                        if (zx.w(ecx_6.b) != esi_4)
                            ecx_6.b = *(zx.d(arg4:3.b) + edx)
                        else
                            ecx_6.b = *(result + 0x168)
                        
                        *edi = ecx_6.b
                        edi = &edi[1]
                        i_6 = i_21
                        i_21 -= 1
                    while (i_6 != 1)
            case 0xf
                if (*(result + 0x18c) == 0)
                    if (i_21 != 0)
                        int16_t esi_8 = *(result + 0x1b8)
                        int32_t i_7
                        
                        do
                            if (zx.w(*edi) * 0x100 + zx.w(edi[1]) == esi_8)
                                uint16_t ecx_43
                                ecx_43.b = *(result + 0x169)
                                *edi = ecx_43.b
                                ecx_43.b = *(result + 0x168)
                                edi[1] = ecx_43.b
                            
                            edi = &edi[2]
                            i_7 = i_21
                            i_21 -= 1
                        while (i_7 != 1)
                else if (i_21 != 0)
                    int16_t esi_5 = *(result + 0x1b8)
                    int32_t i_8
                    
                    do
                        edx_2.b = *edi
                        edx_2:1.b = edi[1]
                        arg4:3.b = edx_2:1.b
                        char var_5_1 = edx_2.b
                        edx_2.w = zx.w(edx_2.b) * 0x100
                        edx_2.w += zx.w(arg4:3.b)
                        uint16_t ecx_38
                        
                        if (edx_2.w != esi_5)
                            ecx_38.b = *(result + 0x180)
                            esi_5 = *(result + 0x1b8)
                            edx_2 = zx.d(*(*(*(result + 0x18c) + (zx.d(arg4:3.b) u>> ecx_38.b << 2))
                                + (zx.d(var_5_1) << 1)))
                            edi[1] = edx_2.b
                            *edi = (edx_2 u>> 8).b
                        else
                            ecx_38.b = *(result + 0x169)
                            *edi = ecx_38.b
                            ecx_38.b = *(result + 0x168)
                            edi[1] = ecx_38.b
                        edi = &edi[2]
                        i_8 = i_21
                        i_21 -= 1
                    while (i_8 != 1)
    case 2
        int32_t edx_12 = *(result + 0x188)
        
        if (*(arg3 + 9) != 8)
            if (*(result + 0x18c) == 0)
                if (i_21 != 0)
                    void* edi_4 = &edi[2]
                    int32_t i_9
                    
                    do
                        if (zx.w(*(edi_4 - 2)) * 0x100 + zx.w(*(edi_4 - 1)) == *(result + 0x1b2)
                                && zx.w(*edi_4) * 0x100 + zx.w(*(edi_4 + 1)) == *(result + 0x1b4)
                                && zx.w(*(edi_4 + 2)) * 0x100 + zx.w(*(edi_4 + 3))
                                == *(result + 0x1b6))
                            uint16_t ecx_68
                            ecx_68.b = *(result + 0x163)
                            *(edi_4 - 2) = ecx_68.b
                            ecx_68.b = *(result + 0x162)
                            *(edi_4 - 1) = ecx_68.b
                            ecx_68.b = *(result + 0x165)
                            *edi_4 = ecx_68.b
                            ecx_68.b = *(result + 0x164)
                            *(edi_4 + 1) = ecx_68.b
                            ecx_68.b = *(result + 0x167)
                            *(edi_4 + 2) = ecx_68.b
                            ecx_68.b = *(result + 0x166)
                            *(edi_4 + 3) = ecx_68.b
                        
                        edi_4 += 6
                        i_9 = i_21
                        i_21 -= 1
                    while (i_9 != 1)
            else if (i_21 != 0)
                void* edi_3 = &edi[2]
                int32_t i_10
                
                do
                    uint32_t ecx_51
                    ecx_51.b = *(edi_3 - 2)
                    ecx_51:1.b = *(edi_3 - 1)
                    arg4:3.b = ecx_51:1.b
                    
                    if (zx.w(ecx_51.b) * 0x100 + zx.w(ecx_51:1.b) != *(result + 0x1b2)
                            || zx.w(*edi_3) * 0x100 + zx.w(*(edi_3 + 1)) != *(result + 0x1b4)
                            || zx.w(*(edi_3 + 2)) * 0x100 + zx.w(*(edi_3 + 3))
                            != *(result + 0x1b6))
                        char ebx_9 = (*(result + 0x180)).b
                        uint32_t esi_12 = zx.d(*edi_3)
                        uint32_t edx_18 = zx.d(*(
                            *(*(result + 0x18c) + (zx.d(arg4:3.b) u>> ebx_9 << 2))
                            + (zx.d(ecx_51.b) << 1)))
                        *(edi_3 - 1) = edx_18.b
                        uint32_t edx_19 = zx.d(*(edi_3 + 1))
                        *(edi_3 - 2) = (edx_18 u>> 8).b
                        uint32_t ecx_61 =
                            zx.d(*(*(*(result + 0x18c) + (edx_19 u>> ebx_9 << 2)) + (esi_12 << 1)))
                        uint32_t esi_13 = zx.d(*(edi_3 + 3))
                        uint32_t edx_22 = ecx_61
                        *(edi_3 + 1) = ecx_61.b
                        ecx_61.b = ebx_9
                        i_21 = i_25
                        int32_t ecx_62 = *(result + 0x18c)
                        *edi_3 = (edx_22 u>> 8).b
                        uint32_t edx_25 = zx.d(
                            *(*(ecx_62 + (esi_13 u>> ecx_61.b << 2)) + (zx.d(*(edi_3 + 2)) << 1)))
                        *(edi_3 + 3) = edx_25.b
                        *(edi_3 + 2) = (edx_25 u>> 8).b
                    else
                        ecx_51.b = *(result + 0x163)
                        *(edi_3 - 2) = ecx_51.b
                        ecx_51.b = *(result + 0x162)
                        *(edi_3 - 1) = ecx_51.b
                        ecx_51.b = *(result + 0x165)
                        *edi_3 = ecx_51.b
                        ecx_51.b = *(result + 0x164)
                        *(edi_3 + 1) = ecx_51.b
                        ecx_51.b = *(result + 0x167)
                        *(edi_3 + 2) = ecx_51.b
                        ecx_51.b = *(result + 0x166)
                        *(edi_3 + 3) = ecx_51.b
                    
                    edi_3 += 6
                    i_10 = i_21
                    i_21 -= 1
                    i_25 = i_21
                while (i_10 != 1)
        else if (edx_12 == 0)
            if (i_21 != 0)
                int16_t edx_13 = *(result + 0x1b2)
                void* edi_2 = &edi[2]
                int32_t i_11
                
                do
                    if (zx.w(*(edi_2 - 2)) == edx_13 && zx.w(*(edi_2 - 1)) == *(result + 0x1b4)
                            && zx.w(*edi_2) == *(result + 0x1b6))
                        uint16_t ecx_50
                        ecx_50.b = *(result + 0x162)
                        *(edi_2 - 2) = ecx_50.b
                        ecx_50.b = *(result + 0x164)
                        *(edi_2 - 1) = ecx_50.b
                        ecx_50.b = *(result + 0x166)
                        *edi_2 = ecx_50.b
                    
                    edi_2 += 3
                    i_11 = i_21
                    i_21 -= 1
                while (i_11 != 1)
        else if (i_21 != 0)
            int16_t esi_9 = *(result + 0x1b2)
            char* edi_1 = &edi[2]
            int32_t i_12
            
            do
                int32_t* ecx_3
                ecx_3.b = edi_1[0xfffffffe]
                arg4:3.b = ecx_3.b
                
                if (zx.w(ecx_3.b) != esi_9 || zx.w(edi_1[0xffffffff]) != *(result + 0x1b4)
                        || zx.w(*edi_1) != *(result + 0x1b6))
                    uint32_t ecx_46
                    ecx_46.b = *(zx.d(arg4:3.b) + edx_12)
                    edi_1[0xfffffffe] = ecx_46.b
                    uint32_t ecx_47
                    ecx_47.b = *(zx.d(edi_1[0xffffffff]) + edx_12)
                    edi_1[0xffffffff] = ecx_47.b
                    ecx_3.b = *(zx.d(*edi_1) + edx_12)
                else
                    ecx_3.b = *(result + 0x162)
                    edi_1[0xfffffffe] = ecx_3.b
                    ecx_3.b = *(result + 0x164)
                    edi_1[0xffffffff] = ecx_3.b
                    ecx_3.b = *(result + 0x166)
                
                *edi_1 = ecx_3.b
                edi_1 = &edi_1[3]
                i_12 = i_21
                i_21 -= 1
            while (i_12 != 1)
    case 4
        int32_t edx_29 = *(result + 0x188)
        
        if (*(arg3 + 9) != 8)
            if (*(result + 0x18c) == 0 || *(result + 0x198) == 0 || *(result + 0x19c) == 0)
                if (i_21 != 0)
                    void* edi_7 = &edi[1]
                    arg4 = edi_7
                    int32_t i_13
                    
                    do
                        uint32_t edx_53 = zx.d(zx.w(*(edi_7 + 1)) * 0x100 + zx.w(*(edi_7 + 2)))
                        
                        if (edx_53.w == 0)
                            uint16_t ecx_95
                            ecx_95.b = *(result + 0x169)
                            *(edi_7 - 1) = ecx_95.b
                            ecx_95.b = *(result + 0x168)
                            *edi_7 = ecx_95.b
                        else if (edx_53.w u< 0xffff)
                            edi_7 = arg4
                            int32_t ecx_100 = zx.d(*(result + 0x168)) * (0xffff - edx_53)
                                + zx.d(zx.w(*(arg4 - 1)) * 0x100 + zx.w(*arg4)) * edx_53 + 0x8000
                            uint32_t edx_59 = ((ecx_100 u>> 0x10) + ecx_100) u>> 0x10
                            *edi_7 = edx_59.b
                            *(edi_7 - 1) = (edx_59 u>> 8).b
                        
                        edi_7 += 4
                        arg4 = edi_7
                        i_13 = i_21
                        i_21 -= 1
                    while (i_13 != 1)
            else if (i_21 != 0)
                uint32_t edi_5 = &edi[1]
                arg4 = edi_5
                int32_t i_14
                
                do
                    uint32_t ecx_79 = zx.d(zx.w(*(edi_5 + 1)) * 0x100 + zx.w(*(edi_5 + 2)))
                    uint32_t edx_43
                    
                    if (ecx_79.w == 0xffff)
                        edx_43 = zx.d(*(
                            *(*(result + 0x18c) + (zx.d(*edi_5) u>> (*(result + 0x180)).b << 2))
                            + (zx.d(*(edi_5 - 1)) << 1)))
                        *edi_5 = edx_43.b
                        *(edi_5 - 1) = (edx_43 u>> 8).b
                    else if (ecx_79.w != 0)
                        int32_t ecx_89 = zx.d(*(result + 0x172)) * (0xffff - ecx_79) + 0x8000 + zx
                            .d(*(*(*(result + 0x19c) + (zx.d(*arg4) u>> (*(result + 0x180)).b << 2))
                            + (zx.d(*(arg4 - 1)) << 1))) * ecx_79
                        edx_43 = ((ecx_89 u>> 0x10) + ecx_89) u>> 0x10
                        
                        if (ecx_2 == 0)
                            edx_43 = zx.d(*(*(*(result + 0x198)
                                + (zx.d(edx_43.b) u>> (*(result + 0x180)).b << 2))
                                + (edx_43 u>> 8 << 1)))
                            i_21 = i_25
                        
                        edi_5 = arg4
                        *edi_5 = edx_43.b
                        *(edi_5 - 1) = (edx_43 u>> 8).b
                    else
                        ecx_79.b = *(result + 0x169)
                        *(edi_5 - 1) = ecx_79.b
                        ecx_79.b = *(result + 0x168)
                        *edi_5 = ecx_79.b
                    edi_5 += 4
                    i_14 = i_21
                    i_21 -= 1
                    arg4 = edi_5
                    i_25 = i_21
                while (i_14 != 1)
        else if (*(result + 0x194) == 0 || esi == 0 || edx_29 == 0)
            if (i_21 != 0)
                int32_t i_15
                
                do
                    uint32_t ecx_69
                    ecx_69.b = edi[1]
                    
                    if (ecx_69.b == 0)
                        ecx_69.b = *(result + 0x168)
                        *edi = ecx_69.b
                    else if (ecx_69.b u< 0xff)
                        uint16_t edx_36 = zx.w(ecx_69.b)
                        ecx_69 =
                            zx.d((0xff - edx_36) * *(result + 0x168) + zx.w(*edi) * edx_36 + 0x80)
                        *edi = (((ecx_69 u>> 8) + ecx_69) s>> 8).b
                    
                    edi = &edi[2]
                    i_15 = i_21
                    i_21 -= 1
                while (i_15 != 1)
        else if (i_21 != 0)
            int32_t var_18_4 = 0xff
            int32_t i_16
            
            do
                uint32_t ecx_71 = zx.d(edi[1])
                
                if (ecx_71.w == 0xff)
                    uint32_t ecx_70
                    ecx_70.b = *(zx.d(*edi) + edx_29)
                    *edi = ecx_70.b
                else if (ecx_71.w != 0)
                    uint32_t ecx_74 = zx.d(zx.w(*(zx.d(*edi) + *(result + 0x194))) * ecx_71.w
                        + (0xff - ecx_71.w) * *(result + 0x172) + 0x80)
                    int32_t edx_35 = ((ecx_74 u>> 8) + ecx_74) s>> 8
                    
                    if (ecx_2 == 0)
                        edx_35.b = zx.d(edx_35.b)[*(result + 0x190)]
                    
                    *edi = edx_35.b
                    edx_29 = *(result + 0x188)
                else
                    ecx_71.b = *(result + 0x168)
                    *edi = ecx_71.b
                
                edi = &edi[2]
                i_16 = i_21
                i_21 -= 1
            while (i_16 != 1)
    case 6
        int32_t edx_60 = *(result + 0x188)
        
        if (*(arg3 + 9) != 8)
            if (*(result + 0x18c) == 0 || *(result + 0x198) == 0 || *(result + 0x19c) == 0)
                if (i_21 != 0)
                    uint32_t esi_37 = &edi[1]
                    arg4 = esi_37
                    int32_t i_17
                    
                    do
                        uint32_t ecx_168 = zx.d(zx.w(*(esi_37 + 5)) * 0x100 + zx.w(*(esi_37 + 6)))
                        
                        if (ecx_168.w == 0)
                            ecx_168.b = *(result + 0x163)
                            *(esi_37 - 1) = ecx_168.b
                            ecx_168.b = *(result + 0x162)
                            *esi_37 = ecx_168.b
                            ecx_168.b = *(result + 0x165)
                            *(esi_37 + 1) = ecx_168.b
                            ecx_168.b = *(result + 0x164)
                            *(esi_37 + 2) = ecx_168.b
                            ecx_168.b = *(result + 0x167)
                            *(esi_37 + 3) = ecx_168.b
                            ecx_168.b = *(result + 0x166)
                            *(esi_37 + 4) = ecx_168.b
                        else if (ecx_168.w u< 0xffff)
                            int32_t ecx_174 = zx.d(*(result + 0x162)) * (0xffff - ecx_168)
                                + zx.d(zx.w(*(arg4 - 1)) * 0x100 + zx.w(*arg4)) * ecx_168 + 0x8000
                            uint32_t edx_140 = ((ecx_174 u>> 0x10) + ecx_174) u>> 0x10
                            *(arg4 - 1) = (edx_140 u>> 8).b
                            char* ecx_177 = arg4
                            *ecx_177 = edx_140.b
                            int32_t ecx_182 = zx.d(*(result + 0x164)) * (0xffff - ecx_168)
                                + zx.d(zx.w(ecx_177[1]) * 0x100 + zx.w(*(arg4 + 2))) * ecx_168
                                + 0x8000
                            uint32_t edx_148 = ((ecx_182 u>> 0x10) + ecx_182) u>> 0x10
                            *(arg4 + 1) = (edx_148 u>> 8).b
                            *(arg4 + 2) = edx_148.b
                            esi_37 = arg4
                            i_21 = i_25
                            int32_t ecx_190 = zx.d(*(result + 0x166)) * (0xffff - ecx_168)
                                + zx.d(zx.w(*(arg4 + 3)) * 0x100 + zx.w(*(arg4 + 4))) * ecx_168
                                + 0x8000
                            uint32_t edx_156 = ((ecx_190 u>> 0x10) + ecx_190) u>> 0x10
                            *(esi_37 + 4) = edx_156.b
                            *(esi_37 + 3) = (edx_156 u>> 8).b
                        
                        esi_37 += 8
                        i_17 = i_21
                        i_21 -= 1
                        arg4 = esi_37
                        i_25 = i_21
                    while (i_17 != 1)
            else if (i_21 != 0)
                char* edi_11 = &edi[1]
                int32_t i_18
                
                do
                    uint32_t edx_97 = zx.d(zx.w(edi_11[5]) * 0x100 + zx.w(edi_11[6]))
                    uint32_t edx_106
                    
                    if (edx_97.w != 0xffff)
                        if (edx_97.w != 0)
                            uint32_t ecx_136 = zx.d((*(result + 0x180)).b)
                            int32_t ebx_13 = 0xffff - edx_97
                            uint32_t ecx_137
                            ecx_137.b = ecx_136.b
                            int32_t var_18_5 = ebx_13
                            int32_t ecx_142 = zx.d(*(result + 0x16c)) * ebx_13 + zx.d(*(
                                *(*(result + 0x19c) + (zx.d(*edi_11) u>> ecx_137.b << 2))
                                + (zx.d(edi_11[0xffffffff]) << 1))) * edx_97 + 0x8000
                            uint32_t edx_114 = ((ecx_142 u>> 0x10) + ecx_142) u>> 0x10
                            
                            if (ecx_2 == 0)
                                edx_114 = zx.d(*(*(*(result + 0x198)
                                    + (zx.d(edx_114.b) u>> (*(result + 0x180)).b << 2))
                                    + (edx_114 u>> 8 << 1)))
                                ebx_13 = var_18_5
                            
                            uint32_t esi_33 = zx.d(edi_11[2])
                            edi_11[0xffffffff] = (edx_114 u>> 8).b
                            int32_t ecx_148 = *(result + 0x19c)
                            *edi_11 = edx_114.b
                            int32_t ecx_153 = zx.d(*(result + 0x16e)) * ebx_13 + 0x8000 + zx.d(*
                                (*(ecx_148 + (esi_33 u>> ecx_136.b << 2)) + (zx.d(edi_11[1]) << 1)))
                                * edx_97
                            uint32_t ebx_19 = ((ecx_153 u>> 0x10) + ecx_153) u>> 0x10
                            
                            if (ecx_2 == 0)
                                ebx_19 = zx.d(*(*(*(result + 0x198)
                                    + (zx.d(ebx_19.b) u>> (*(result + 0x180)).b << 2))
                                    + (ebx_19 u>> 8 << 1)))
                            
                            ecx_153.b = ecx_136.b
                            uint32_t esi_36 = zx.d(edi_11[4]) u>> ecx_153.b
                            int32_t ecx_156 = *(result + 0x19c)
                            edi_11[1] = (ebx_19 u>> 8).b
                            uint32_t edx_124 = zx.d(edi_11[3])
                            edi_11[2] = ebx_19.b
                            int32_t ecx_161 = zx.d(*(result + 0x170)) * var_18_5 + 0x8000
                                + zx.d(*(*(ecx_156 + (esi_36 << 2)) + (edx_124 << 1))) * edx_97
                            edx_106 = ((ecx_161 u>> 0x10) + ecx_161) u>> 0x10
                            
                            if (ecx_2 == 0)
                                edx_106 = zx.d(*(*(*(result + 0x198)
                                    + (zx.d(edx_106.b) u>> (*(result + 0x180)).b << 2))
                                    + (edx_106 u>> 8 << 1)))
                            
                            goto label_6d306f
                        
                        uint16_t ecx_125
                        ecx_125.b = *(result + 0x163)
                        edi_11[0xffffffff] = ecx_125.b
                        ecx_125.b = *(result + 0x162)
                        *edi_11 = ecx_125.b
                        ecx_125.b = *(result + 0x165)
                        edi_11[1] = ecx_125.b
                        ecx_125.b = *(result + 0x164)
                        edi_11[2] = ecx_125.b
                        ecx_125.b = *(result + 0x167)
                        edi_11[3] = ecx_125.b
                        ecx_125.b = *(result + 0x166)
                        edi_11[4] = ecx_125.b
                    else
                        char ebx_12 = (*(result + 0x180)).b
                        uint32_t esi_28 = zx.d(edi_11[1])
                        uint32_t edx_99 = zx.d(*(
                            *(*(result + 0x18c) + (zx.d(*edi_11) u>> ebx_12 << 2))
                            + (zx.d(edi_11[0xffffffff]) << 1)))
                        *edi_11 = edx_99.b
                        uint32_t edx_100 = zx.d(edi_11[2])
                        edi_11[0xffffffff] = (edx_99 u>> 8).b
                        uint32_t ecx_132 = zx.d(
                            *(*(*(result + 0x18c) + (edx_100 u>> ebx_12 << 2)) + (esi_28 << 1)))
                        uint32_t esi_29 = zx.d(edi_11[4])
                        uint32_t edx_103 = ecx_132
                        edi_11[2] = ecx_132.b
                        ecx_132.b = ebx_12
                        int32_t ecx_133 = *(result + 0x18c)
                        edi_11[1] = (edx_103 u>> 8).b
                        edx_106 = zx.d(
                            *(*(ecx_133 + (esi_29 u>> ecx_132.b << 2)) + (zx.d(edi_11[3]) << 1)))
                    label_6d306f:
                        i_21 = i_25
                        edi_11[4] = edx_106.b
                        edi_11[3] = (edx_106 u>> 8).b
                    edi_11 = &edi_11[8]
                    i_18 = i_21
                    i_21 -= 1
                    i_25 = i_21
                while (i_18 != 1)
        else
            uint32_t ecx_103
            
            if (*(result + 0x194) == 0 || esi == 0 || edx_60 == 0)
                if (i_21 != 0)
                    uint32_t edx_80 = &edi[1]
                    arg4 = edx_80
                    int32_t i_19
                    
                    do
                        ecx_103.b = *(edx_80 + 2)
                        
                        if (ecx_103.b == 0)
                            ecx_103.b = *(result + 0x162)
                            *(edx_80 - 1) = ecx_103.b
                            ecx_103.b = *(result + 0x164)
                            *edx_80 = ecx_103.b
                            ecx_103.b = *(result + 0x166)
                            *(edx_80 + 1) = ecx_103.b
                        else if (ecx_103.b u< 0xff)
                            uint16_t esi_25 = zx.w(ecx_103.b)
                            uint32_t ecx_115 = zx.d(zx.w(*(edx_80 - 1)) * esi_25
                                + *(result + 0x162) * (0xff - esi_25) + 0x80)
                            char* ecx_116 = arg4
                            ecx_116[0xffffffff] = (((ecx_115 u>> 8) + ecx_115) s>> 8).b
                            uint32_t ecx_118 = zx.d(zx.w(*ecx_116) * esi_25
                                + *(result + 0x164) * (0xff - esi_25) + 0x80)
                            char* ecx_119 = arg4
                            *ecx_119 = (((ecx_118 u>> 8) + ecx_118) s>> 8).b
                            uint32_t ecx_121 = zx.d(zx.w(ecx_119[1]) * esi_25
                                + *(result + 0x166) * (0xff - esi_25) + 0x80)
                            *(arg4 + 1) = (((ecx_121 u>> 8) + ecx_121) s>> 8).b
                            edx_80 = arg4
                        
                        edx_80 += 4
                        arg4 = edx_80
                        i_19 = i_21
                        i_21 -= 1
                    while (i_19 != 1)
            else if (i_21 != 0)
                char* edi_9 = &edi[1]
                int32_t i_20
                
                do
                    ecx_103.b = edi_9[2]
                    
                    if (ecx_103.b == 0xff)
                        uint32_t ecx_104
                        ecx_104.b = *(zx.d(edi_9[0xffffffff]) + edx_60)
                        edi_9[0xffffffff] = ecx_104.b
                        uint32_t ecx_105
                        ecx_105.b = *(zx.d(*edi_9) + edx_60)
                        *edi_9 = ecx_105.b
                        ecx_103.b = *(zx.d(edi_9[1]) + edx_60)
                        edi_9[1] = ecx_103.b
                    else if (ecx_103.b != 0)
                        uint32_t edx_61 = zx.d(ecx_103.b)
                        uint32_t ecx_107
                        ecx_107.w = *(result + 0x16c)
                        ecx_107.w *= 0xff - edx_61.w
                        uint32_t ecx_108 = zx.d(
                            zx.w(*(zx.d(edi_9[0xffffffff]) + *(result + 0x194))) * edx_61.w
                            + ecx_107.w + 0x80)
                        int32_t edx_67 = ((ecx_108 u>> 8) + ecx_108) s>> 8
                        
                        if (ecx_2 == 0)
                            edx_67.b = zx.d(edx_67.b)[*(result + 0x190)]
                        
                        uint32_t ecx_110 = zx.d(*edi_9)
                        edi_9[0xffffffff] = edx_67.b
                        uint16_t edx_69 = zx.w(*(ecx_110 + *(result + 0x194))) * edx_61.w
                        ecx_110.w = *(result + 0x16e)
                        ecx_110.w *= 0xff - edx_61.w
                        uint32_t ecx_111 = zx.d(edx_69 + ecx_110.w + 0x80)
                        int32_t edx_73 = ((ecx_111 u>> 8) + ecx_111) s>> 8
                        
                        if (ecx_2 == 0)
                            edx_73.b = zx.d(edx_73.b)[*(result + 0x190)]
                        
                        uint32_t ecx_113 = zx.d(edi_9[1])
                        *edi_9 = edx_73.b
                        int16_t edx_75 = zx.w(*(ecx_113 + *(result + 0x194))) * edx_61.w
                        ecx_113.w = *(result + 0x170)
                        ecx_113.w *= 0xff - edx_61.w
                        ecx_103 = zx.d(edx_75 + ecx_113.w + 0x80)
                        int32_t edx_79 = ((ecx_103 u>> 8) + ecx_103) s>> 8
                        
                        if (ecx_2 == 0)
                            edx_79.b = *(zx.d(edx_79.b) + *(result + 0x190))
                        
                        edi_9[1] = edx_79.b
                        edx_60 = *(result + 0x188)
                    else
                        ecx_103.b = *(result + 0x162)
                        edi_9[0xffffffff] = ecx_103.b
                        ecx_103.b = *(result + 0x164)
                        *edi_9 = ecx_103.b
                        ecx_103.b = *(result + 0x166)
                        edi_9[1] = ecx_103.b
                    
                    edi_9 = &edi_9[4]
                    i_20 = i_21
                    i_21 -= 1
                while (i_20 != 1)

return result
