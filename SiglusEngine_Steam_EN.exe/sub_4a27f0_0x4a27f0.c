// 函数: sub_4a27f0
// 地址: 0x4a27f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_73c
int32_t eax_1 = __security_cookie ^ &var_73c
var_73c = 0
int32_t var_724 = 0
BOOL ebx

if (arg5 != 0 || data_1b1bcd8 == 0)
    ebx = 1
else
    ebx = 0

BOOL ecx = 0
BOOL var_720 = ebx
BOOL var_738 = 0

if (arg4 == 0)
    if (data_13132f8 != 0)
        if (data_1313308 != 0)
            ecx = 1
        
        var_738 = ecx
    else if (data_1313304 != 0)
        var_738 = 1
else if ((arg4 == 1 || arg4 == 0x63) && data_131330c != 0)
    var_738 = 1

int32_t ecx_1 = data_1313310
int32_t var_714 = ecx_1

if (ecx_1 s< 0x64)
    var_714 = 0x64
    var_738 = 0
else if (ecx_1 s> 0x12c)
    var_714 = 0x12c
else if (ecx_1 s<= 0x64)
    var_738 = 0

uint32_t eax_6 = zx.d(arg2)
char const* const var_754_2
void var_508
void var_218
int32_t edi_1

if (eax_6 == 0)
    int32_t esi_8 = arg3 s/ 0x2710
    int32_t var_74c_6 = esi_8
    edi_1 = arg3 s% 0x2710
    sub_4c84d0(&var_508, "Z%03d.koe")
    int32_t var_74c_7 = edi_1
    int32_t var_750_4 = esi_8
    int32_t var_754_6 = esi_8
    int32_t var_758_2 = 0x134e310
    char* var_75c_2 = &data_1352208
    sub_4c84d0(&var_218, "%s\%s\%03d\Z%03d%04d")
    int32_t var_74c_8 = edi_1
    int32_t var_750_5 = esi_8
    var_754_2 = "%03d-%04d "
else if (eax_6 == 1)
    int32_t esi_5 = arg3 s/ 0x186a0
    int32_t var_74c_3 = esi_5
    edi_1 = arg3 s% 0x186a0
    sub_4c84d0(&var_508, "Z%03d.koe")
    int32_t var_74c_4 = edi_1
    int32_t var_750_2 = esi_5
    int32_t var_754_4 = esi_5
    int32_t var_758_1 = 0x134e310
    char* var_75c_1 = &data_1352208
    sub_4c84d0(&var_218, "%s\%s\%03d\Z%03d%05d")
    int32_t var_74c_5 = edi_1
    int32_t var_750_3 = esi_5
    var_754_2 = "%03d-%05d "
else
    int32_t esi_2 = arg3 s/ 0x186a0
    int32_t var_74c = esi_2
    edi_1 = arg3 s% 0x186a0
    sub_4c84d0(&var_508, "Z%04d.koe")
    int32_t var_74c_1 = edi_1
    int32_t var_750 = esi_2
    int32_t var_754_1 = esi_2
    int32_t var_758 = 0x134e310
    char* var_75c = &data_1352208
    sub_4c84d0(&var_218, "%s\%s\%04d\Z%04d%05d")
    int32_t var_74c_2 = edi_1
    int32_t var_750_1 = esi_2
    var_754_2 = "%04d-%05d "

sub_4c84d0(&data_7027c0, var_754_2)
int32_t var_734
void* var_730
uint32_t var_72c
uint32_t var_728
int32_t var_71c
BOOL var_718
char var_710
int32_t esi_11
void var_70f

if (data_108fe40 == 1)
label_4a2abc:
    void* var_74c_10 = &var_508
    int32_t var_750_6 = 0x134e310
    char* var_754_8 = &data_1352618
    sub_4c84d0(&var_710, "%s\%s\%s")
    
    if (ebx != 0 || data_702fc0 != ebx)
        void* esi_12 = &var_710
        int32_t eax_25 = sub_4d1610(&var_710, 0x5c)
        
        if (eax_25 != 0xffffffff)
            esi_12 = &var_70f + eax_25
        
        int32_t eax_26 = sub_4d1610(esi_12, 0x2e)
        
        if (eax_26 == 0xffffffff)
            eax_26 = sub_4cfc80(esi_12)
            esi_12 -= 1
        
        void* const var_74c_14 = &data_61b800
        int32_t* var_74c_15 = &var_71c
        sub_4c9a70(&var_73c, 0, &var_710, edi_1, sub_4c84d0(esi_12 + eax_26, ".%s"), &var_73c, 
            &var_724, &var_730, &var_728, &var_72c)
        
        if (var_73c == 0)
            sub_4c3960(&var_710, &data_61b804)
            sub_4c9730(&var_73c, 0, &var_710, edi_1, &var_73c, &var_724, &var_730, &var_728, 
                &var_72c, &var_71c)
            
            if (var_73c == 0)
                sub_4c3960(&var_710, &data_61b808)
                sub_4c9410(&var_73c, 0, &var_710, edi_1, &var_73c, &var_724, &var_730, &var_71c)
                var_728 = 1
                bool cond:2_1 = var_73c != 0
                var_72c = 0x10
                
                if (not(cond:2_1))
                    goto label_4a2c73
    else
        int32_t var_74c_11 = sub_4c3960(&var_710, &data_61b800)
        
        if (sub_4c9b00(edi_1) == 0)
            sub_4c3960(&var_710, &data_61b804)
            
            if (sub_4c9810(edi_1) == 0)
                sub_4c3960(&var_710, &data_61b808)
                
                if (sub_4c94a0(edi_1) == 0)
                label_4a2c73:
                    sub_4cfd70(&var_710, &var_508)
                    char* esi_14 = &var_710
                    int32_t eax_30 = sub_4d1610(&var_710, 0x5c)
                    
                    if (eax_30 != 0xffffffff)
                        esi_14 = &var_70f + eax_30
                    
                    int32_t eax_31 = sub_4d1610(esi_14, 0x2e)
                    
                    if (eax_31 == 0xffffffff)
                        eax_31 = sub_4cfc80(esi_14)
                        esi_14 -= 1
                    
                    void* const var_74c_18 = &data_61b800
                    char* eax_32 = sub_4c84d0(&esi_14[eax_31], ".%s")
                    int32_t esi_16 = data_7031b0
                    
                    if (esi_16 == 0xffffffff)
                        goto label_4a2d78
                    
                    if (sub_4c51f0(eax_32, &var_710, esi_16, nullptr) == 0)
                        goto label_4a2d78
                    
                    char var_4a0[0x288]
                    int32_t* ecx_30 =
                        sub_4c5550(&var_4a0, &var_710, esi_16, 7, &var_4a0, &var_718, &var_734)
                    bool cond:4_1
                    
                    if (ebx != 0 || data_702fc0 != ebx)
                        int32_t* var_74c_21 = &var_71c
                        sub_4c9a70(&var_73c, var_734, &var_4a0, edi_1, ecx_30, &var_73c, &var_724, 
                            &var_730, &var_728, &var_72c)
                        cond:4_1 = var_73c != 0
                    else
                        int32_t* var_74c_20 = ecx_30
                        cond:4_1 = sub_4c9b00(edi_1) != 0
                    
                    if (not(cond:4_1))
                        esi_16 = data_7031b0
                    label_4a2d78:
                        sub_4cfd70(&var_710, &var_508)
                        char* ebx_1 = &var_710
                        int32_t eax_37 = sub_4d1610(&var_710, 0x5c)
                        
                        if (eax_37 != 0xffffffff)
                            ebx_1 = &var_70f + eax_37
                        
                        int32_t eax_38 = sub_4d1610(ebx_1, 0x2e)
                        
                        if (eax_38 == 0xffffffff)
                            eax_38 = sub_4cfc80(ebx_1)
                            ebx_1 -= 1
                        
                        void* const var_74c_22 = &data_61b804
                        char* eax_39 = sub_4c84d0(&ebx_1[eax_38], ".%s")
                        
                        if (esi_16 == 0xffffffff)
                            goto label_4a2e79
                        
                        if (sub_4c51f0(eax_39, &var_710, esi_16, nullptr) == 0)
                            goto label_4a2e79
                        
                        sub_4c5550(&var_4a0, &var_710, esi_16, 7, &var_4a0, &var_718, &var_734)
                        bool cond:5_1
                        
                        if (var_720 != 0 || data_702fc0 != 0)
                            sub_4c9730(&var_73c, var_734, &var_4a0, edi_1, &var_73c, &var_724, 
                                &var_730, &var_728, &var_72c, &var_71c)
                            cond:5_1 = var_73c != 0
                        else
                            cond:5_1 = sub_4c9810(edi_1) != 0
                        
                        if (not(cond:5_1))
                            esi_16 = data_7031b0
                        label_4a2e79:
                            sub_4cfd70(&var_710, &var_508)
                            char* ebx_3 = &var_710
                            int32_t eax_44 = sub_4d1610(&var_710, 0x5c)
                            
                            if (eax_44 != 0xffffffff)
                                ebx_3 = &var_70f + eax_44
                            
                            int32_t eax_45 = sub_4d1610(ebx_3, 0x2e)
                            
                            if (eax_45 == 0xffffffff)
                                eax_45 = sub_4cfc80(ebx_3)
                                ebx_3 -= 1
                            
                            void* const var_74c_26 = &data_61b808
                            char* eax_46 = sub_4c84d0(&ebx_3[eax_45], ".%s")
                            
                            if (esi_16 == 0xffffffff)
                            label_4a3380:
                                
                                if (data_702fc0 != 0)
                                    sub_55f390(
                                        sub_55f1e0(
                                            sub_55ef70(eax_46, data_72d6ac, data_719b6c, 0x61b884, 
                                                &data_7027c0), 
                                            data_72d6ac, data_719b6c, 0x61b884, &data_7027c0), 
                                        data_72d6ac, data_719b6c, 0x61b884, &data_7027c0)
                                
                                sub_5f02dd(eax_1 ^ &var_73c)
                                return 0
                            
                            eax_46 = sub_4c51f0(eax_46, &var_710, esi_16, nullptr)
                            
                            if (eax_46 == 0)
                                goto label_4a3380
                            
                            sub_4c5550(&var_4a0, &var_710, esi_16, 7, &var_4a0, &var_718, &var_734)
                            bool cond:6_1
                            
                            if (var_720 != 0 || data_702fc0 != 0)
                                eax_46 = sub_4c9410(&var_73c, var_734, &var_4a0, edi_1, &var_73c, 
                                    &var_724, &var_730, &var_71c)
                                var_728 = 1
                                cond:6_1 = var_73c == 0
                                var_72c = 0x10
                            else
                                eax_46 = sub_4c94a0(edi_1)
                                cond:6_1 = eax_46 == 0
                            
                            if (cond:6_1)
                                goto label_4a3380
    
    esi_11 = 2
else
    sub_4cfd70(&var_710, &var_218)
    char* esi_9 = &var_710
    int32_t eax_14 = sub_4d1610(&var_710, 0x5c)
    
    if (eax_14 != 0xffffffff)
        esi_9 = &var_70f + eax_14
    
    int32_t eax_15 = sub_4d1610(esi_9, 0x2e)
    
    if (eax_15 == 0xffffffff)
        eax_15 = sub_4cfc80(esi_9)
        esi_9 -= 1
    
    void* const var_74c_9 = &data_617380
    int32_t eax_17 = sub_4c3da0(sub_4c84d0(&esi_9[eax_15], ".%s"), 0xffffffff, &var_710, 0xffffffff)
    
    if (eax_17 != 1)
        int32_t eax_19 =
            sub_4c3da0(sub_4c3960(&var_710, &data_61737c), 0xffffffff, &var_710, 0xffffffff)
        
        if (eax_19 != 1)
            int32_t eax_21 =
                sub_4c3da0(sub_4c3960(&var_710, &data_617384), 0xffffffff, &var_710, 0xffffffff)
            
            if (eax_21 != 1)
                goto label_4a2abc
            
            esi_11 = eax_21
        else
            esi_11 = eax_19
    else
        esi_11 = eax_17
int32_t edi_2 = data_63e16c

if (edi_2 u<= 0x3f)
    WaitForSingleObject(data_641b54, 0xffffffff)
    int32_t edx_31 = edi_2 * 0x180
    
    if (*(edx_31 + 0x208cd90) != 2)
        if (data_641b5c != 0 && (&data_208cd58)[edi_2 * 0x60] != 0
                && (&data_208cd54)[edi_2 * 0x60] != 0)
            int32_t ecx_46 = *(edx_31 + 0x208cdac)
            *(edx_31 + 0x208ce94) = data_1392ccc
            *(edx_31 + 0x208ce88) = ecx_46
            *(edx_31 + 0x208ce7c) = 0
            *(edx_31 + 0x208ce80) = ecx_46
            *(edx_31 + 0x208cea0) = 2
            *(edx_31 + 0x208ce9c) = 0x64
            *(edx_31 + 0x208ce98) = 0
            *(edx_31 + 0x208ce8c) = 0
            *(edx_31 + 0x208ce90) = 0
            *(edx_31 + 0x208ce84) = 0
            *(edx_31 + 0x208cd90) = 1
        
        *(edx_31 + 0x208cd90) = 2
    
    ReleaseSemaphore(data_641b54, 1, nullptr)

WaitForSingleObject(data_702788, 0xffffffff)

if (edi_2 s< 0)
    ReleaseSemaphore(data_702788, 1, nullptr)
else
    sub_4cb9c0(edi_2, 0x64)

int32_t edi_3

if (data_63e16c != 2)
    edi_3 = 2
    data_641afc = 0
else
    edi_3 = 3
    data_641afc = 1

data_63e16c = edi_3

if (edi_3 u<= 0x3f)
    WaitForSingleObject(data_641b54, 0xffffffff)
    sub_4c29d0(edi_3)
    ReleaseSemaphore(data_641b54, 1, nullptr)

WaitForSingleObject(data_702788, 0xffffffff)

if (edi_3 u<= 0x3f)
    sub_4cb390(edi_3 * 0x3c0 + &data_20af850)

BOOL eax_50
int32_t ecx_51
eax_50, ecx_51 = ReleaseSemaphore(data_702788, 1, nullptr)

if (var_720 == 0)
    if (var_73c != 0)
        sub_4d6c40(&var_73c, &var_724)
    
    sub_5f02dd(eax_1 ^ &var_73c)
    return 1

if (data_12a3ef4 == 1 && data_13132b8 != 0)
    eax_50 = sub_4a0aa0(ecx_51)
    
    if (eax_50 != 0)
        eax_50 = sub_4a1090(data_13132bc, data_12a2958)
        data_187c530 = 0

if (esi_11 == 2)
    int32_t esi_17 = var_71c
    void* eax_52
    
    if (var_738 == 0)
        eax_52 = var_730
    else
        int32_t var_74c_30 = var_714
        eax_52 = sub_4ce910(eax_50, &var_724, &var_73c, var_730, esi_17, var_728, var_72c)
    
    sub_4cd7b0(eax_52, var_73c, data_641afc * 0x3b8 + 0x108eb60, var_724, eax_52, var_728.w, 
        var_72c.w, esi_17)
    goto label_4a31c8

if (var_738 == 0)
    int32_t var_750_29 = 0
    int32_t var_754_32 = 4
    int32_t var_758_15 = 0xffffffff
    int32_t var_75c_15 = 0xffffffff
    int32_t var_760_6 = 0xffffffff
    int32_t var_764_8 = 0
    int32_t var_768_4 = 1
    int32_t var_770_2 = 0xffffffff
    int32_t var_774_2 = 0xffffffff
    sub_49db20(&var_710, data_63e16c, 0x976380, nullptr, data_7031b0, &var_710, 0xffffffff, 
        0xffffffff, 0, 1, 0, 0xffffffff, 0xffffffff, 0xffffffff, 4, 0, arg6)
else
    void* eax_55
    int32_t ecx_60
    eax_55, ecx_60 = sub_4c3910(&var_710, "ogg")
    void* var_754_29
    
    if (eax_55 != 0)
        BOOL eax_56 = sub_4c3910(&var_710, "nwa")
        char* ecx_62 = &var_710
        
        if (eax_56 != 0)
            int32_t ecx_67
            eax_55, ecx_67 = sub_4c3910(ecx_62, "wav")
            
            if (eax_55 == 0)
                int32_t var_74c_35 = ecx_67
                int32_t var_750_28 = 0xffffffff
                var_754_29 = eax_55
                goto label_4a32fe
        else
            var_738 = eax_56
            var_720 = eax_56
            var_730 = eax_56
            var_718 = eax_56
            sub_4c4810(&var_720, &var_738, ecx_62, &var_720, "koe_NWAfullexpand", 0xffffffff, 
                0xffffffff)
            
            if (var_738 != 0)
                sub_4bde10(&var_718, &var_730, var_720, &var_718, &var_734, &var_728, &var_72c, 
                    &var_71c)
                sub_4cd7b0(sub_4d6c40(&var_738, &var_720), var_730, 
                    data_641afc * 0x3b8 + 0x108eb60, var_718, var_734, var_728.w, var_72c.w, 
                    var_71c)
            label_4a331e:
                sub_4ce990(data_641afc * 0x3b8 + 0x108eb60, var_714)
            label_4a31c8:
                int32_t var_750_24 = 0
                int32_t var_754_28 = 4
                int32_t var_758_11 = 0xffffffff
                int32_t var_75c_12 = 0xffffffff
                int32_t var_760_5 = 0xffffffff
                int32_t var_764_7 = 0
                int32_t var_768_3 = 1
                int32_t eax_54 = data_641afc * 0x3b8 + 0x108eb60
                int32_t var_770_1 = 0xffffffff
                int32_t var_774_1 = 0xffffffff
                sub_49db20(eax_54, data_63e16c, 0x976380, nullptr, data_7031b0, nullptr, 
                    0xffffffff, 0xffffffff, eax_54, 1, 0, 0xffffffff, 0xffffffff, 0xffffffff, 4, 0, 
                    arg6)
    else
        int32_t var_74c_32 = ecx_60
        int32_t var_750_25 = 0xffffffff
        var_754_29 = 2
    label_4a32fe:
        
        if (sub_4cd600(eax_55, &var_710, data_641afc * 0x3b8 + 0x108eb60, 0, 0xffffffff, 1, 
                var_754_29, 0xffffffff) != 0)
            goto label_4a331e

sub_5f02dd(eax_1 ^ &var_73c)
return 2
