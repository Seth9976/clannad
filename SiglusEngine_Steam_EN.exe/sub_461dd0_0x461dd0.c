// 函数: sub_461dd0
// 地址: 0x461dd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* i_12 = arg4
int32_t ebx = 0
void* i_11 = nullptr
void* i_8 = i_12
BOOL var_798 = 0

if (arg6 != 0)
    i_11 = *arg6

void* i_7 = i_11
sub_461c00(arg3)
int32_t var_690[0x40]
int32_t ecx
int32_t edi_1
edi_1, ecx = __memfill_u32(&var_690, arg2, 0x40)
int32_t var_790[0x40]
__builtin_memset(&var_790, 0, 0x100)
arg3[3].b = 0
int32_t* ebx_1

if (*i_12 != 0x28)
    ebx_1 = arg3
else
    void* i_13 = &i_12[1]
    int32_t var_7c8_1 = 0
    int32_t i = 0
    int32_t var_7c4_1 = 0
    i_8 = i_13
    
    if (data_1af4e84 s> 0)
        do
            int32_t var_7cc
            sub_4ef440(&var_7cc, &i_8, i_13, "$@", &var_7cc)
            
            if (ebx s< 0x40)
                int32_t eax_6 = var_7cc
                
                if (eax_6 u<= 0x3f)
                    var_690[ebx] = eax_6
                
                ebx += 1
            
            sub_4eef40(&var_7cc, 1)
            i_13 = i_8
            
            while (true)
                char eax_7 = *i_13
                
                if (eax_7 != 0x2c && eax_7 != 0x20)
                    break
                
                i_13 += 1
            
            i += 1
            i_8 = i_13
        while (i s< data_1af4e84)
    
    ebx_1 = arg3
    i_12 = i_13 + 1
    i_8 = i_12
    ebx_1[3].b = 1

char var_834_2 = 0
int32_t* var_838_2 = nullptr
void* var_83c = nullptr
int32_t var_840 = 0xffffffff
int128_t var_820
int128_t* var_844 = &var_820
int32_t var_80c = 0
int32_t* var_848 = &i_7
int32_t var_804 = 0xffffffff
var_820 = data_624a40
void* i_5

if (sub_5266b0(&i_7, &i_8, i_12, var_848, var_844, var_840, var_83c, var_838_2, var_834_2) == 0)
    i_5 = sub_499600(&var_820)
else
    int32_t i_10 = var_820:8.d
    int32_t esi = 0
    
    if (i_10 s<= 0)
        i_5 = sub_499600(&var_820)
    else
        void* edi_2 = var_820:4.d
        int32_t* eax_10 = edi_2 + 0x14
        int32_t i_1
        
        do
            if (*eax_10 == 0)
                esi += 1
            
            eax_10 = &eax_10[0xb]
            i_1 = i_10
            i_10 -= 1
        while (i_1 != 1)
        
        if (esi s<= 0)
            i_5 = sub_499600(&var_820)
        else
            if (esi s> 0x40)
                esi = 0x40
            
            sub_461c00(ebx_1)
            
            if (esi s> 0)
                uint32_t eax_11 = esi * 0x58
                sub_4d6960(eax_11, &ebx_1[1], ebx_1, eax_11, "MultiMessage")
                ebx_1[2] = esi
            
            void* j_3 = ebx_1[1]
            void* eax_12 = edi_2 + 0x28
            BOOL hMem_3 = 0
            void* j_1 = j_3
            BOOL hMem_2 = 0
            BOOL i_2 = 0
            void* var_7a0_1 = eax_12
            
            do
                if (*(eax_12 - 0x14) == 0 && hMem_3 s<= 0x40)
                    uint32_t esi_1 = *eax_12
                    sub_4d1c30(sub_4d6960(eax_12, j_3 + 0xc, j_3 + 8, esi_1, "MultiMessageMsg"), 
                        *(eax_12 - 4), *(j_3 + 0xc), esi_1)
                    int32_t* j_4 = j_1
                    j_4[4] = *var_7a0_1
                    
                    if (arg3[3].b == 0)
                        *j_4 = arg2
                        j_4[1] = var_798
                    else
                        int32_t eax_18 = var_690[hMem_2]
                        void* ecx_8 = &var_790[eax_18]
                        *j_4 = eax_18
                        int32_t eax_19 = *ecx_8
                        j_4[1] = eax_19
                        *ecx_8 = eax_19 + 1
                    
                    eax_12 = var_7a0_1
                    hMem_3 = hMem_2 + 1
                    i_2 = var_798
                    j_3 = &j_4[0x16]
                    hMem_2 = hMem_3
                    j_1 = j_3
                
                i_2 += 1
                eax_12 += 0x2c
                var_798 = i_2
                var_7a0_1 = eax_12
            while (i_2 s< var_820:8.d)
            
            sub_499600(&var_820)
            hMem_2 = 0
            var_798 = 0
            int32_t i_9 = 0
            bool cond:1_1 = arg3[2] s<= 0
            void* edi_4 = arg3[1]
            *(arg3 + 0xd) = 0
            
            if (not(cond:1_1))
                int32_t* edi_5 = edi_4 + 8
                int32_t* ecx_11 = arg3
                int32_t i_3
                
                do
                    int32_t eax_24 = edi_5[1]
                    
                    if (eax_24 != 0)
                        uint32_t esi_2 = edi_5[2]
                        sub_4d1c30(
                            sub_4d6960(eax_24, &var_798, &hMem_2, esi_2, "MULTIMSG_STR_TMP"), 
                            eax_24, var_798, esi_2)
                        
                        if (*edi_5 != 0)
                            int32_t esi_3 = data_1af413c
                            
                            if (esi_3 == 0)
                            label_462146:
                                HGLOBAL hMem = *edi_5
                                
                                if (hMem != 0)
                                    GlobalUnlock(hMem)
                                    GlobalFree(*edi_5)
                                    *edi_5 = 0
                                
                                goto label_462161
                            
                            WaitForSingleObject(data_7027a8, 0xffffffff)
                            
                            if (*edi_5 == 0)
                            label_462161:
                                edi_5[1] = 0
                                
                                if (esi_3 != 0)
                                    sub_4d6500()
                                    ReleaseSemaphore(data_7027a8, 1, nullptr)
                            else if (sub_4d6b80(edi_5) != 0)
                                goto label_462146
                        else
                            edi_5[1] = 0
                        
                        BOOL j_2 = var_798
                        int32_t* var_834_10 = nullptr
                        void* var_838_8 = nullptr
                        int32_t* var_83c_4 = nullptr
                        char var_90[0x84]
                        char* var_840_1 = &var_90
                        j_1 = j_2
                        int32_t eax_28 = sub_4edbc0(&var_90, &j_1, j_2, var_840_1, var_83c_4, 
                            var_838_8, var_834_10)
                        void* eax_29 = sub_542900(&var_90)
                        edi_5[6] = eax_29
                        
                        if (eax_28 s> 0)
                            eax_29 = sub_4ebec0(&var_90, &edi_5[4], &edi_5[3], &var_90)
                        
                        sub_4ebec0(eax_29, &edi_5[1], edi_5, j_1)
                        int32_t eax_31 = sub_4a5770(edi_5[1])
                        BOOL hMem_1 = hMem_2
                        edi_5[2] = eax_31
                        
                        if (hMem_1 != 0)
                            int32_t esi_5 = data_1af413c
                            char eax_32
                            
                            if (esi_5 != 0)
                                WaitForSingleObject(data_7027a8, 0xffffffff)
                                eax_32 = sub_4d6b80(&hMem_2)
                            
                            if (esi_5 == 0 || eax_32 != 0)
                                GlobalUnlock(hMem_1)
                                GlobalFree(hMem_1)
                                hMem_2 = 0
                                var_798 = 0
                                
                                if (esi_5 != 0)
                                    sub_4d6500()
                                    ReleaseSemaphore(data_7027a8, 1, nullptr)
                        else
                            var_798 = hMem_1
                        
                        ecx_11 = arg3
                    
                    edi_5 = &edi_5[0x16]
                    i_3 = i_9 + 1
                    i_9 = i_3
                while (i_3 s< ecx_11[2])
            
            int32_t* edi_6 = arg3
            int32_t i_4 = 0
            int32_t* eax_34 = edi_6[1]
            
            if (edi_6[2] s> 0)
                do
                    int32_t ecx_20 = *eax_34
                    eax_34[7] = 2
                    
                    if (ecx_20 s>= 0 && ecx_20 s< 0x40)
                        int32_t esi_6 = *(ecx_20 * 0x1d4 + &data_1090b2c)
                        
                        if (esi_6 == 0)
                            eax_34[7] = esi_6
                        else if (esi_6 != 1 || *(ecx_20 * 0x1d4 + &data_1090b6c) == 0xffffffff)
                            eax_34[7] = 2
                        else
                            eax_34[7] = esi_6
                    
                    i_4 += 1
                    eax_34 = &eax_34[0x16]
                while (i_4 s< edi_6[2])
            
            void* ebx_3 = &edi_6[8]
            i_5 = nullptr
            void* var_7a0_2 = ebx_3
            var_798 = 0
            hMem_2 = &edi_6[0xb]
            
            do
                int32_t* edx_11 = arg3
                char var_590
                char* esi_7 = &var_590
                *ebx_3 = 0
                *(ebx_3 + 4) = 0
                int32_t* edi_7 = edi_6[1]
                j_1 = nullptr
                void* j
                
                if (edx_11[2] s> 0)
                    j = nullptr
                    
                    do
                        if (edi_7[7] == 1 && i_5 == *edi_7)
                            char* eax_35 = edi_7[6]
                            
                            if (eax_35 != 0 && *eax_35 != 0)
                                if (*ebx_3 != 0)
                                    void* const eax_36 = &data_619bb8
                                    void* edx_12 = esi_7
                                    
                                    if (esi_7 != 0)
                                        do
                                            j.b = *eax_36
                                            
                                            if (j.b u< 0x80)
                                            label_46238c:
                                                *edx_12 = j.b
                                                edx_12 += 1
                                                eax_36 += 1
                                            else
                                                if (j.b u< 0xa0)
                                                    if (j.b u>= 0xfe)
                                                        goto label_46238c
                                                else if (j.b u<= 0xdf || j.b u>= 0xfe)
                                                    goto label_46238c
                                                
                                                *edx_12 = j.b
                                                j.b = *(eax_36 + 1)
                                                *(edx_12 + 1) = j.b
                                                edx_12 += 2
                                                eax_36 += 2
                                        while (*eax_36 != 0)
                                        
                                        *edx_12 = 0
                                    
                                    esi_7 = &esi_7[1]
                                
                                int32_t var_834_17 = edi_7[6]
                                sub_4c84d0(esi_7, "%s")
                                int32_t edx_13 = 0
                                char* eax_37 = esi_7
                                
                                if (esi_7 != 0)
                                    if (*esi_7 != 0)
                                        do
                                            char ecx_24 = *eax_37
                                            
                                            if (ecx_24 u< 0x80)
                                                edx_13 += 1
                                                eax_37 = &eax_37[1]
                                            else if (ecx_24 u< 0xa0)
                                                if (ecx_24 u>= 0xfe)
                                                    edx_13 += 1
                                                    eax_37 = &eax_37[1]
                                                else
                                                    edx_13 += 2
                                                    eax_37 = &eax_37[2]
                                            else if (ecx_24 u<= 0xdf || ecx_24 u>= 0xfe)
                                                edx_13 += 1
                                                eax_37 = &eax_37[1]
                                            else
                                                edx_13 += 2
                                                eax_37 = &eax_37[2]
                                        while (*eax_37 != 0)
                                    
                                    edx_13 += 1
                                
                                j = j_1
                                esi_7 = &esi_7[edx_13 - 1]
                                *ebx_3 = 1
                                *(ebx_3 + 4) += 1
                                edx_11 = arg3
                            
                            i_5 = var_798
                        
                        j += 1
                        edi_7 = &edi_7[0x16]
                        j_1 = j
                    while (j s< edx_11[2])
                
                BOOL hMem_4 = hMem_2
                
                if (*(hMem_4 - 0xc) == 0)
                    edi_6 = arg3
                else
                    int32_t esi_8 = 0
                    char* eax_38 = &var_590
                    
                    if (var_590 != 0)
                        do
                            j.b = *eax_38
                            
                            if (j.b u< 0x80)
                                esi_8 += 1
                                eax_38 = &eax_38[1]
                            else if (j.b u< 0xa0)
                                if (j.b u>= 0xfe)
                                    esi_8 += 1
                                    eax_38 = &eax_38[1]
                                else
                                    esi_8 += 2
                                    eax_38 = &eax_38[2]
                            else if (j.b u<= 0xdf || j.b u>= 0xfe)
                                esi_8 += 1
                                eax_38 = &eax_38[1]
                            else
                                esi_8 += 2
                                eax_38 = &eax_38[2]
                        while (*eax_38 != 0)
                    
                    sub_4d1c30(
                        sub_4d6960(eax_38, hMem_4, hMem_4 - 4, esi_8 + 1, 
                            "MultiMessageNamaeWindowStr"), 
                        &var_590, *hMem_4, esi_8 + 1)
                    edi_6 = arg3
                    
                    if (edi_6[6] == 0)
                        int32_t esi_10 = 0
                        char* eax_40 = &var_590
                        
                        if (var_590 != 0)
                            do
                                j.b = *eax_40
                                
                                if (j.b u< 0x80)
                                    esi_10 += 1
                                    eax_40 = &eax_40[1]
                                else if (j.b u< 0xa0)
                                    if (j.b u>= 0xfe)
                                        esi_10 += 1
                                        eax_40 = &eax_40[1]
                                    else
                                        esi_10 += 2
                                        eax_40 = &eax_40[2]
                                else if (j.b u<= 0xdf || j.b u>= 0xfe)
                                    esi_10 += 1
                                    eax_40 = &eax_40[1]
                                else
                                    esi_10 += 2
                                    eax_40 = &eax_40[2]
                            while (*eax_40 != 0)
                        
                        sub_4d1c30(
                            sub_4d6960(eax_40, &edi_6[7], &edi_6[6], esi_10 + 1, 
                                "MultiMessageComposeNamaeStr"), 
                            &var_590, edi_6[7], esi_10 + 1)
                    
                    ebx_3 = var_7a0_2
                    i_5 = var_798
                
                hMem_2 += 0x10
                i_5 += 1
                ebx_3 += 0x10
                var_798 = i_5
                var_7a0_2 = ebx_3
            while (i_5 s< 0x40)
            
            void* esi_12 = edi_6[1]
            int32_t i_6 = 0
            
            if (arg3[2] s> 0)
                do
                    i_5 = *esi_12
                    
                    if (i_5 s>= 0 && i_5 s< 0x40)
                        *(esi_12 + 0x28) = *(i_5 * 0x2d0 + 0x8fcb0c)
                        *(esi_12 + 0x2c) =
                            *(i_5 * 0x3920 + 0xf8d2f0) * *(esi_12 + 4) + *(i_5 * 0x2d0 + 0x8fcb10)
                        *(esi_12 + 0x30) = *(i_5 * 0x3920 + 0xf8d324)
                        i_5 = *(i_5 * 0x2d0 + 0x8fcb14)
                        *(esi_12 + 0x34) = i_5
                    
                    i_6 += 1
                    esi_12 += 0x58
                while (i_6 s< arg3[2])

if (arg5 != 0)
    i_5 = i_8
    *arg5 = i_5

if (arg6 != 0)
    i_5 = i_7
    *arg6 = i_5

sub_5f02dd(eax_1 ^ &__saved_ebp)
return i_5
