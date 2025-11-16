// 函数: sub_4f5130
// 地址: 0x4f5130
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = data_1bfdd30
int32_t esi = 0
int32_t var_330 = 0xffffffff

if (eax_2 s> 0x41c)
    char const* const var_354_1
    int32_t eax_9
    
    if (eax_2 - 0x41d u<= 0xd)
        switch (eax_2)
            case 0x41d, 0x41e, 0x420
            label_4f5244:
                int32_t eax_8 = data_1af4e84
                
                switch (eax_8)
                    case 0
                        sub_4ef190(eax_8, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720)
                    case 1
                        sub_4ef190(eax_8, arg2 + 0x20, *(arg2 + 0x20), "S$$", &data_1b8a720)
                    case 2
                        sub_4ef190(eax_8, arg2 + 0x20, *(arg2 + 0x20), "S$$$$$$$", &data_1b8a720)
                    case 3
                        sub_4ef190(eax_8, arg2 + 0x20, *(arg2 + 0x20), "S$$$$$$$$", &data_1b8a720)
                    case 4
                        sub_4ef190(eax_8, arg2 + 0x20, *(arg2 + 0x20), "S$$$$$$$$$$$$$$$$", 
                            &data_1b8a720)
            case 0x426
            label_4f52ef:
                eax_9 = data_1af4e84
                
                if (eax_9 u> 4)
                    goto label_4f53a1
                
                switch (eax_9)
                    case 0
                        int32_t* var_350_1 = &data_1b8a720
                        var_354_1 = &data_61e934
                    case 1
                        int32_t* var_350_2 = &data_1b8a720
                        var_354_1 = "$$$$"
                    case 2
                        int32_t* var_350_3 = &data_1b8a720
                        var_354_1 = "$$$$$$$$$"
                    case 3
                        int32_t* var_350_4 = &data_1b8a720
                        var_354_1 = "$$$$$$$$$$"
                    case 4
                        int32_t* var_350_5 = &data_1b8a720
                        var_354_1 = "$$$$$$$$$$$$$$$$$"
                
            label_4f5392:
                sub_4ef190(eax_9, arg2 + 0x20, *(arg2 + 0x20), var_354_1, &data_1b8a720)
            label_4f53a1:
                
                if (data_1af4e84 != 4)
                    esi = 1
                    var_330 = data_1b8a748
                
                data_1bfdd30 -= 0xa
            case 0x427, 0x428, 0x42a
            label_4f5340:
                eax_9 = data_1af4e84
                
                if (eax_9 u> 4)
                    goto label_4f53a1
                
                switch (eax_9)
                    case 0
                        int32_t* var_350_6 = &data_1b8a720
                        var_354_1 = &data_61ee14
                    case 1
                        int32_t* var_350_7 = &data_1b8a720
                        var_354_1 = "S$$$"
                    case 2
                        int32_t* var_350_8 = &data_1b8a720
                        var_354_1 = "S$$$$$$$$"
                    case 3
                        int32_t* var_350_9 = &data_1b8a720
                        var_354_1 = "S$$$$$$$$$"
                    case 4
                        int32_t* var_350_10 = &data_1b8a720
                        var_354_1 = "S$$$$$$$$$$$$$$$$"
                
                goto label_4f5392
else if (eax_2 == 0x41c)
label_4f517d:
    int32_t eax_5 = data_1af4e84
    
    switch (eax_5)
        case 0
            sub_4ef190(eax_5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        case 1
            sub_4ef190(eax_5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
        case 2
            sub_4ef190(eax_5, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
        case 3
            sub_4ef190(eax_5, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
        case 4
            sub_4ef190(eax_5, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$$$$$$$", &data_1b8a720)
else if (eax_2 - 0x34 u<= 0x22)
    switch (eax_2)
        case 0x34, 0x48
            goto label_4f517d
        case 0x35, 0x36, 0x38, 0x49, 0x4a, 0x4c
            goto label_4f5244
        case 0x3e, 0x52
            goto label_4f52ef
        case 0x3f, 0x40, 0x42, 0x53, 0x54, 0x56
            goto label_4f5340

int32_t var_32c
int32_t var_328
int32_t var_324
int32_t var_320
int32_t var_31c
int32_t var_318
int32_t var_314
int32_t var_310
LRESULT result_1
void* var_304
int32_t var_300
void* var_2fc
int32_t var_2f8
void* var_2f4
int32_t var_2f0
int32_t var_2ec
int32_t ecx_28
int32_t edx_16
int32_t esi_2
void* edi_2
bool cond:9_1

switch (data_1af4e84)
    case 0
        sub_4efc40(data_1b8a734, &var_32c)
    case 1
        sub_4efc40(data_1b8a734, &var_32c)
        int32_t eax_13 = (&data_1b8a748)[esi * 5]
        var_2ec = eax_13
        
        if (eax_13 s<= 0)
            var_2ec = 0xff
        else
            cond:9_1 = eax_13 s< 0xff
        label_4f5668:
            
            if (not(cond:9_1))
                var_2ec = 0xff
    case 2
        sub_4efc40(data_1b8a734, &var_32c)
        int32_t ecx_25 = esi * 5
        void* edi_1 = (&data_1b8a748)[ecx_25]
        int32_t edx_14 = (&data_1b8a75c)[ecx_25]
        int32_t esi_1 = (&data_1b8a784)[ecx_25]
        var_2fc = (&data_1b8a770)[ecx_25]
        var_2f4 = (&data_1b8a798)[ecx_25]
        var_304 = edi_1
        var_300 = edx_14
        var_2f8 = esi_1
        var_2f0 = (&data_1b8a7ac)[ecx_25]
        
        if (data_1bfdd30 s>= 0x3e8)
            int32_t eax_17 = (&data_1b8a770)[ecx_25]
            
            if (eax_17 == 0)
                var_2fc = edi_1
            else
                var_2fc = eax_17 - 1 + edi_1
            
            if (esi_1 == 0)
                var_2f8 = edx_14
            else
                var_2f8 = edx_14 - 1 + esi_1
    case 3
        sub_4efc40(data_1b8a734, &var_32c)
        int32_t ecx_27 = esi * 5
        void* eax_22 = (&data_1b8a770)[ecx_27]
        edi_2 = (&data_1b8a748)[ecx_27]
        edx_16 = (&data_1b8a75c)[ecx_27]
        esi_2 = (&data_1b8a784)[ecx_27]
        var_2fc = eax_22
        var_2f4 = (&data_1b8a798)[ecx_27]
        ecx_28 = (&data_1b8a7c0)[ecx_27]
        var_304 = edi_2
        var_300 = edx_16
        var_2f8 = esi_2
        var_2f0 = (&data_1b8a7ac)[ecx_27]
        var_2ec = ecx_28
        
        if (data_1bfdd30 s< 0x3e8)
            goto label_4f565e
        
        if (eax_22 == 0)
        label_4f5641:
            var_2fc = edi_2
            goto label_4f5647
        
        var_2fc = eax_22 - 1 + edi_2
    label_4f5647:
        
        if (esi_2 != 0)
            var_2f8 = edx_16 - 1 + esi_2
            goto label_4f565e
        
        var_2f8 = edx_16
    label_4f565e:
        
        if (ecx_28 s> 0)
            cond:9_1 = ecx_28 s< 0xff
            goto label_4f5668
        
        var_2ec = 0xff
    case 4
        var_2fc = data_1b8a75c
        var_2f4 = data_1b8a784
        edi_2 = data_1b8a734
        edx_16 = data_1b8a748
        esi_2 = data_1b8a770
        var_2f0 = data_1b8a798
        int32_t eax_31 = data_1b8a7ac
        var_304 = edi_2
        
        if (eax_31 s< 0)
            eax_31 = 0
        
        var_300 = edx_16
        bool cond:6_1 = data_1bfdd30 s< 0x3e8
        ecx_28 = data_1b8a84c
        var_310 = eax_31
        var_32c = data_1b8a7c0
        var_328 = data_1b8a7d4
        var_324 = data_1b8a7e8
        var_320 = data_1b8a7fc
        var_31c = data_1b8a810
        var_318 = data_1b8a824
        var_314 = data_1b8a838
        var_2f8 = esi_2
        var_2ec = ecx_28
        result_1 = data_1b8a860
        
        if (cond:6_1)
            goto label_4f565e
        
        int32_t eax_40 = data_1b8a75c
        
        if (eax_40 == 0)
            goto label_4f5641
        
        var_2fc = eax_40 - 1 + edi_2
        goto label_4f5647

int32_t eax_45 = var_310
int32_t var_334_2 = 0

if (var_330 s> 0xffffffff)
    eax_45 = var_330

char* edi_3 = nullptr
int32_t var_2e4
sub_4d1ba0(eax_45, 0x2d4, &var_2e4, 0)
void* edx_17 = var_304
int32_t esi_3 = var_300
void* var_330_1 = var_2fc
void* var_18c = var_2fc
int32_t var_340 = var_2f8
int32_t var_188 = var_2f8
int32_t eax_48 = data_1bfdd30
int32_t var_1c4 = 0
int32_t var_c4 = 0xffffffff
int32_t var_84 = 0xff
int32_t var_6c = 0
void* var_68 = 0xffffffff
void* var_33c = edx_17
int32_t var_338 = esi_3
int32_t var_1f0
int32_t ecx_30
void* eax_49

if (eax_48 s> 0x48)
    bool cond:8_1
    
    if (eax_48 s> 0x41c)
        eax_49 = eax_48 - 0x41d
        cond:8_1 = eax_48 == 0x41d
    else
        if (eax_48 == 0x41c)
            goto label_4f57d7
        
        eax_49 = eax_48 - 0x49
        cond:8_1 = eax_48 == 0x49
    
    if (cond:8_1)
    label_4f59bc:
        edi_3 = data_1b8a728
        
        if (edi_3 != 0)
            void* esi_4
            
            if (*edi_3 != 0x3f)
                sub_542740(eax_49.b, &var_68, edi_3, 1, 0)
                esi_4 = var_68
                var_340 = var_188
                var_330_1 = var_18c
                var_338 = esi_3
                eax_49 = edx_17
                var_33c = eax_49
            label_4f5a75:
                int32_t eax_73 = sub_42a960(eax_49, var_300, var_304, var_2fc, var_2f8, var_2f4, 
                    var_2f0, var_2ec)
                
                if (eax_73 == 0)
                    var_2fc = var_330_1 - var_33c + var_2f4
                    var_304 = var_2f4
                    var_300 = var_2f0
                    int32_t var_350_16 = var_2f0
                    var_2f8 = var_340 - var_338 + var_2f0
                    eax_49 = sub_412680(sub_4119a0(1, 0), edi_3, 1, edx_17, esi_3, var_18c, 
                        var_188, var_2f4, var_2f0, var_2ec, 0, var_68)
                else
                    sub_4122f0(eax_73, edi_3, 1, esi_4)
                    eax_49 = data_1bfdd30
                    int32_t var_6c_2 = 1
                    
                    if (eax_49 == 0x35 || eax_49 == 0x49 || eax_49 == 0x41d)
                        var_334_2 = 1
            else if (edi_3[1] == 0x3f && edi_3[2] == 0x3f && data_7037ec != 0)
                esi_4 = data_703810
                edi_3 = &data_7037ec
                var_68 = esi_4
                int32_t var_70_1 = 1
                goto label_4f5a75
        
        var_1f0 = 1
        ecx_30 = 0
        
        if (sub_42a960(eax_49, var_300, var_304, var_2fc, var_2f8, var_2f4, var_2f0, var_2ec) != 0)
            ecx_30 = 1
    else
        void* temp2_1 = eax_49
        eax_49 -= 1
        
        if (temp2_1 == 1)
            goto label_4f58fa
        
        void* temp3_1 = eax_49
        eax_49 -= 2
        
        if (temp3_1 == 2)
            goto label_4f59bc
        
        ecx_30 = 0
else if (eax_48 == 0x48)
label_4f57d7:
    int32_t ecx_31 = data_1b8a720
    int32_t eax_58 = var_2ec - 1
    var_1f0 = ecx_31
    
    if (eax_58 u> 0xfd || ecx_31 == 1)
        int32_t var_6c_1 = 1
        var_2ec = 0xff
        
        if (sub_42a960(eax_58, var_300, var_304, var_2fc, var_2f8, var_2f4, var_2f0, 0xff) == 0)
            ecx_30 = 0
        else
            ecx_30 = 1
    else
        var_304 = var_2f4
        var_2fc += var_2f4 - edx_17
        var_300 = var_2f0
        int32_t ecx_33 = var_2f0 - esi_3
        var_2f8 += ecx_33
        int32_t var_350_11 = ecx_33
        var_1f0 = 1
        sub_4119a0(1, 0)
        
        if (ecx_31 s>= 0)
            sub_4128b0(ecx_31, esi_3, edx_17, var_18c, var_188, ecx_31, var_2f4, var_2f0, 1, 
                0xffffffff, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, var_2ec)
        
        ecx_30 = 0
else
    eax_49 = eax_48 - 0x34
    
    if (eax_49 u> 4)
        ecx_30 = 0
    else
        switch (eax_49)
            case nullptr
                goto label_4f57d7
            case 1, 4
                goto label_4f59bc
            case 2
            label_4f58fa:
                edi_3 = data_1b8a728
                
                if (edi_3 != 0 && *edi_3 != 0x3f)
                    sub_542740(eax_49.b, &var_68, edi_3, 2, 0)
                    var_2fc = var_18c - edx_17 + var_2f4
                    var_304 = var_2f4
                    var_300 = var_2f0
                    var_2f8 = var_188 - esi_3 + var_2f0
                    sub_412680(sub_4119a0(1, 0), edi_3, 1, edx_17, esi_3, var_18c, var_188, 
                        var_2f4, var_2f0, var_2ec, 1, var_68)
                
                var_1f0 = 1
                ecx_30 = 0
            case 3
                ecx_30 = 0
int32_t var_84_1 = var_2ec
LRESULT result = result_1
LRESULT result_2

if (result s<= 0xb)
    if (result s< 0xffffffff)
        result = 0xffffffff
    
    result_2 = result
else
    result_2 = 0xb

if (var_1f0 u<= 0xf && var_1c4 u<= 0xf)
    void* eax_82 = sub_49c260(ecx_30)
    
    if (var_334_2 != 0)
        char* ecx_42 = &data_13926ac
        
        while (true)
            eax_82.b = *ecx_42
            
            if (eax_82.b u>= 0x80 && (eax_82.b u< 0xa0 || eax_82.b u> 0xdf) && eax_82.b u< 0xfe)
                ecx_42 = &ecx_42[2]
                continue
            
            if (eax_82.b == 0)
                break
            
            if (eax_82.b u>= 0x61 && eax_82.b u<= 0x7a)
                eax_82.b -= 0x20
                *ecx_42 = eax_82.b
            
            ecx_42 = &ecx_42[1]
        
        char* ecx_43 = edi_3
        
        if (edi_3 != 0)
            while (true)
                eax_82.b = *ecx_43
                
                if (eax_82.b u>= 0x80 && (eax_82.b u< 0xa0 || eax_82.b u> 0xdf) && eax_82.b u< 0xfe)
                    ecx_43 = &ecx_43[2]
                    continue
                
                if (eax_82.b == 0)
                    break
                
                if (eax_82.b u>= 0x61 && eax_82.b u<= 0x7a)
                    eax_82.b -= 0x20
                    *ecx_43 = eax_82.b
                
                ecx_43 = &ecx_43[1]
        
        if (sub_4d0f10(&data_13926ac, edi_3) == 0 && data_13926a8 == var_68 && data_13926a4 == 0
                && data_13926a0 == 0 && data_70383c == 0 && sub_49c2b0() == 0)
            int32_t eax_86 = sub_475090(result_2)
            int32_t edx_30 = data_1af1724
            
            if (eax_86 == 0)
                edx_30 = 1
            
            data_1af1724 = edx_30
        
        eax_82 = sub_42a500(1)
    
    sub_4ef7c0(eax_82, var_300, var_304, var_2fc, var_2f8, var_1f0, var_2f4, var_2f0, var_1c4, 
        eax_45, var_32c, var_328, var_324, var_320, var_31c, var_318, var_314, result_2, 0, 0, 1)
    int32_t eax_87 = data_1bfdd30
    var_2e4 = eax_87
    int32_t var_c4_1 = 0xffffffff
    int32_t var_c0_1 = 0
    int32_t var_74_1 = 0
    char var_2e0[0xf0]
    
    if (edi_3 != 0)
        sub_4cfdf0(eax_87, edi_3, &var_2e0, 0x24)
    result = sub_42a6d0(&var_2e4)
    
    if (var_334_2 != 0)
        sub_4cfd70(&data_13926ac, edi_3)
        void* esi_6 = var_68
        data_13926a8 = esi_6
        result = sub_4cfd70(&data_7037ec, edi_3)
        data_703810 = esi_6

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
