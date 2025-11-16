// 函数: sub_6ec910
// 地址: 0x6ec910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[3]
int32_t edi = arg1[2]

if (eax s< 3)
    edi = sub_6ec810(arg1, 3)
    eax = arg1[3]

uint32_t edi_1 = edi u>> 0x1d
arg1[2] = edi << 3
arg1[3] = eax - 3
int32_t i = 0
int32_t i_7 = 0

do
    int32_t eax_4 = arg1[2]
    int32_t ebx_1 = arg1[3]
    uint8_t eax_3
    
    if (edi_1 != 0)
        if (ebx_1 s< edi_1)
            eax_4 = sub_6ec810(arg1, edi_1)
            ebx_1 = arg1[3]
        
        arg1[3] = ebx_1 - edi_1
        eax_3 = (eax_4 u>> (0x20 - edi_1.b)).b
        i = i_7
        arg1[2] = (eax_4 * 2) << (edi_1.b - 1)
    else
        eax_3 = 0
    
    *(arg2 + i + 0x100) = eax_3
    i += 1
    i_7 = i
while (i s< 0x40)

int32_t eax_5 = arg1[3]
int32_t edi_2 = arg1[2]

if (eax_5 s< 4)
    edi_2 = sub_6ec810(arg1, 4)
    eax_5 = arg1[3]

int32_t i_11 = 0x40
arg1[2] = edi_2 << 4
arg1[3] = eax_5 - 4
int32_t i_14 = 0x40
int16_t* ecx_10 = arg2 + 0x80
int16_t* var_8 = ecx_10
int32_t i_1

do
    int32_t eax_9 = arg1[2]
    int32_t ebx_4 = arg1[3]
    uint16_t eax_8
    
    if (edi_2 u>> 0x1c != 0xffffffff)
        if (ebx_4 s< (edi_2 u>> 0x1c) + 1)
            eax_9 = sub_6ec810(arg1, (edi_2 u>> 0x1c) + 1)
            ebx_4 = arg1[3]
        
        arg1[3] = ebx_4 - ((edi_2 u>> 0x1c) + 1)
        arg1[2] = (eax_9 * 2) << (((edi_2 u>> 0x1c) + 1).b - 1)
        i_11 = i_14
        eax_8 = (eax_9 u>> (0x20 - ((edi_2 u>> 0x1c) + 1).b)).w
        ecx_10 = var_8
    else
        eax_8 = 0
    
    *ecx_10 = eax_8
    ecx_10 = &ecx_10[1]
    i_1 = i_11
    i_11 -= 1
    var_8 = ecx_10
    i_14 = i_11
while (i_1 != 1)
int32_t eax_10 = arg1[3]
int32_t edi_5 = arg1[2]

if (eax_10 s< 4)
    edi_5 = sub_6ec810(arg1, 4)
    eax_10 = arg1[3]

void* edx_6 = arg2
arg1[2] = edi_5 << 4
arg1[3] = eax_10 - 4
int32_t i_2 = 0
int32_t i_8 = 0

do
    int32_t eax_14 = arg1[2]
    int32_t ebx_6 = arg1[3]
    uint16_t eax_13
    
    if (edi_5 u>> 0x1c != 0xffffffff)
        if (ebx_6 s< (edi_5 u>> 0x1c) + 1)
            eax_14 = sub_6ec810(arg1, (edi_5 u>> 0x1c) + 1)
            ebx_6 = arg1[3]
        
        arg1[3] = ebx_6 - ((edi_5 u>> 0x1c) + 1)
        arg1[2] = (eax_14 * 2) << (((edi_5 u>> 0x1c) + 1).b - 1)
        edx_6 = arg2
        eax_13 = (eax_14 u>> (0x20 - ((edi_5 u>> 0x1c) + 1).b)).w
        i_2 = i_8
    else
        eax_13 = 0
    
    *(edx_6 + (i_2 << 1)) = eax_13
    i_2 += 1
    i_8 = i_2
while (i_2 s< 0x40)

int32_t eax_15 = arg1[3]
int32_t edi_8 = arg1[2]

if (eax_15 s< 9)
    edi_8 = sub_6ec810(arg1, 9)
    eax_15 = arg1[3]

int32_t i_15 = (edi_8 u>> 0x17) + 1
arg1[2] = edi_8 << 9
arg1[3] = eax_15 - 9
int32_t i_16 = i_15
uint8_t* eax_19 = _malloc(i_15 << 6)

if (eax_19 != 0)
    if (i_15 s> 0)
        uint8_t* ebx_8 = eax_19
        int32_t i_9 = i_15
        int32_t i_3
        
        do
            for (int32_t j = 0; j s< 0x40; )
                int32_t edx_10 = arg1[3]
                int32_t eax_20 = arg1[2]
                
                if (edx_10 s< 8)
                    eax_20 = sub_6ec810(arg1, 8)
                    edx_10 = arg1[3]
                
                ebx_8[j] = (eax_20 u>> 0x18).b
                j += 1
                arg1[2] = eax_20 << 8
                arg1[3] = edx_10 - 8
            
            ebx_8 = &ebx_8[0x40]
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)
        i_15 = i_16
    
    uint32_t i_4 = i_15 - 1
    int32_t ecx_29 = 0
    int32_t var_c_1 = 0
    
    if (i_4 != 0)
        ecx_29 = 0
        
        do
            ecx_29 += 1
            i_4 u>>= 1
        while (i_4 != 0)
        
        var_c_1 = ecx_29
    
    int32_t edi_10 = 0
    int32_t var_14 = 0
    int32_t ecx_30 = ecx_29
    
    while (true)
        int32_t ebx_11 = edi_10 s/ 3
        int32_t edx_13 = edi_10 s% 3
        void* eax_29 = arg2 + (((ebx_11 * 3 + edx_13) * 3 + 0x50) << 2)
        int32_t eax_31
        int32_t edx_16
        int32_t edi_11
        
        if (edi_10 s> 0)
            int32_t edx_15 = arg1[3]
            edi_11 = arg1[2]
            
            if (edx_15 s< 1)
                int32_t eax_30 = sub_6ec810(arg1, 1)
                edx_15 = arg1[3]
                edi_11 = eax_30
                ecx_30 = var_c_1
            
            edx_16 = edx_15 - 1
            eax_31 = edi_11 * 2
            arg1[2] = eax_31
            arg1[3] = edx_16
        
        uint8_t* edx_20
        
        if (edi_10 s<= 0 || edi_11 s< 0)
            int32_t eax_41 = arg1[2]
            int32_t edi_12 = arg1[3]
            uint32_t eax_40
            
            if (ecx_30 != 0)
                if (edi_12 s< ecx_30)
                    eax_41 = sub_6ec810(arg1, ecx_30)
                    edi_12 = arg1[3]
                
                eax_40 = eax_41 u>> (0x20 - ecx_29.b)
                ecx_30 = var_c_1
                arg1[2] = (eax_41 * 2) << (ecx_29.b - 1)
                arg1[3] = edi_12 - var_c_1
            else
                eax_40 = 0
            
            int32_t i_5 = 0
            int32_t var_130[0x40]
            var_130[0] = eax_40
            int32_t i_13 = 0
            int32_t i_10 = 0
            int32_t var_24_2 = 0
            void var_230
            int32_t i_12
            
            do
                int32_t edi_14 = 0
                uint32_t j_1 = 0x3e - i_5
                
                if (0x3e != i_5)
                    edi_14 = 0
                    
                    do
                        edi_14 += 1
                        j_1 u>>= 1
                    while (j_1 != 0)
                
                int32_t ebx_12 = arg1[2]
                int32_t eax_42 = arg1[3]
                uint32_t ebx_13
                
                if (edi_14 != 0)
                    if (eax_42 s< edi_14)
                        ebx_12 = sub_6ec810(arg1, edi_14)
                        eax_42 = arg1[3]
                    
                    arg1[3] = eax_42 - edi_14
                    arg1[2] = (ebx_12 * 2) << (edi_14.b - 1)
                    i_5 = i_10
                    ebx_13 = ebx_12 u>> (0x20 - edi_14.b)
                    ecx_30 = var_c_1
                else
                    ebx_13 = 0
                
                i_5 = i_5 + 1 + ebx_13
                i_10 = i_5
                *(&var_230 + var_24_2) = ebx_13 + 1
                int32_t eax_46 = arg1[2]
                int32_t edi_16 = arg1[3]
                uint32_t eax_47
                
                if (ecx_30 != 0)
                    if (edi_16 s< ecx_30)
                        eax_46 = sub_6ec810(arg1, ecx_30)
                        edi_16 = arg1[3]
                    
                    arg1[2] = (eax_46 * 2) << (ecx_29.b - 1)
                    i_5 = i_10
                    eax_47 = eax_46 u>> (0x20 - ecx_29.b)
                    ecx_30 = var_c_1
                    arg1[3] = edi_16 - var_c_1
                else
                    eax_47 = 0
                
                i_12 = i_13 + 1
                i_13 = i_12
                var_24_2 = i_12 << 2
                var_130[i_12] = eax_47
            while (i_5 s< 0x3f)
            
            if (i_5 s> 0x3f)
                _free(eax_19)
                return 0xffffffec
            
            int32_t edi_19 = i_12 << 2
            *eax_29 = i_12
            int32_t* eax_49 = _malloc(edi_19)
            *(eax_29 + 4) = eax_49
            
            if (eax_49 == 0)
                break
            
            sub_748840(eax_49, &var_230, edi_19)
            int32_t edi_21 = i_12 << 6
            int32_t eax_51 = _malloc(edi_21 + 0x40)
            
            if (eax_51 == 0)
                break
            
            edx_20 = eax_19
            *(eax_29 + 8) = eax_51
            int128_t* ecx_48 = edi_21 + eax_51
            int32_t i_6
            
            do
                int32_t eax_52 = var_130[i_12]
                
                if (eax_52 s>= i_16)
                    _free(edx_20)
                    return 0xffffffec
                
                void* eax_54 = &edx_20[eax_52 << 6]
                *ecx_48 = *eax_54
                ecx_48[1] = *(eax_54 + 0x10)
                ecx_48[2] = *(eax_54 + 0x20)
                i_6 = i_12
                i_12 -= 1
                ecx_48[3] = *(eax_54 + 0x30)
                ecx_48 -= 0x40
            while (i_6 s> 0)
        else
            if (ebx_11 s> 0)
                if (edx_16 s< 1)
                    eax_31 = sub_6ec810(arg1, 1)
                    edx_16 = arg1[3]
                
                arg1[2] = eax_31 * 2
                arg1[3] = edx_16 - 1
            
            int32_t ecx_35
            int32_t edx_17
            
            if (ebx_11 s<= 0 || eax_31 s>= 0)
                int32_t eax_34
                int32_t edx_18
                edx_18:eax_34 = sx.q(var_14 - 1)
                edx_17 = mods.dp.d(edx_18:eax_34, 3)
                ecx_35 = divs.dp.d(edx_18:eax_34, 3)
            else
                edx_17 = edx_13
                ecx_35 = ebx_11 - 1
            
            int32_t eax_38 = (ecx_35 * 3 + edx_17) * 3
            *eax_29 = *(arg2 + (eax_38 << 2) + 0x140)
            edx_20 = eax_19
            *(eax_29 + 8) = *(arg2 + (eax_38 << 2) + 0x148)
        
        ecx_30 = var_c_1
        edi_10 = var_14 + 1
        var_14 = edi_10
        
        if (edi_10 s>= 6)
            _free(edx_20)
            return 0
    
    _free(eax_19)

return 0xffffffff
