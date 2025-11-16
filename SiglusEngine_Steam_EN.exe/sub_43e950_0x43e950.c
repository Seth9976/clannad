// 函数: sub_43e950
// 地址: 0x43e950
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ecx
char** hWnd_5
ecx, hWnd_5 = __chkstk(0x301c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* esi = nullptr
int32_t var_10 = 0xd
char* var_300c = ecx
char** hWnd_2 = arg3
int32_t eax_4 = sub_4d0fe0(arg3.b, "#COLOR_TABLE.", ecx, var_10)
int32_t var_3018
int32_t var_3010
int32_t* var_3008
char var_3004
char var_3000

if (eax_4 != 0)
    int32_t eax_16 = sub_4d0fe0(eax_4.b, "#SYSCOM_USE=", ecx, 0xc)
    
    if (eax_16 != 0)
        int32_t eax_23 = sub_4d0fe0(eax_16.b, "#SYSCOM_MOD=", ecx, 0xc)
        
        if (eax_23 != 0)
            int32_t eax_30 = sub_4d0fe0(eax_23.b, "#SYSCOM_MOD2=", ecx, 0xd)
            char** edx_5 = &var_300c
            
            if (eax_30 != 0)
                int32_t eax_37 = sub_434540(eax_30.b, edx_5, ecx, "#SYSCOM.")
                char* ecx_24 = var_300c
                char** edx_6 = &var_300c
                char var_1008[0xfec]
                
                if (eax_37 != 0)
                    int32_t eax_102 = sub_434540(eax_37.b, edx_6, ecx_24, "#MASK.")
                    char* ecx_75 = var_300c
                    char** edx_28 = &var_300c
                    
                    if (eax_102 != 0)
                        int32_t eax_112 = sub_434540(eax_102.b, edx_28, ecx_75, "#DLL.")
                        char* ecx_83 = var_300c
                        char** edx_32 = &var_300c
                        
                        if (eax_112 != 0)
                            int32_t eax_122 = sub_434540(eax_112.b, edx_32, ecx_83, "#SEL.")
                            char* ecx_91 = var_300c
                            char** edx_36 = &var_300c
                            int32_t var_2ffc
                            int32_t var_2ff8
                            int32_t var_2ff4
                            int32_t var_2ff0
                            int32_t var_2fec
                            int32_t var_2fe8
                            int32_t var_2fe4
                            int32_t var_2fe0
                            int32_t var_2fdc
                            int32_t var_2fd8
                            int32_t var_2fd4
                            int32_t var_2fd0
                            int32_t var_2fcc
                            
                            if (eax_122 != 0)
                                int32_t eax_152 = sub_434540(eax_122.b, edx_36, ecx_91, "#SELR.")
                                char* ecx_104 = var_300c
                                char** edx_39 = &var_300c
                                
                                if (eax_152 != 0)
                                    int32_t eax_182 =
                                        sub_434540(eax_152.b, edx_39, ecx_104, "#SERIALPDT.")
                                    char* ecx_114 = var_300c
                                    char** edx_42 = &var_300c
                                    
                                    if (eax_182 != 0)
                                        int32_t eax_207 =
                                            sub_434540(eax_182.b, edx_42, ecx_114, "#OBJECT_MAX=")
                                        char* ecx_134 = var_300c
                                        char** edx_50 = &var_300c
                                        
                                        if (eax_207 != 0)
                                            int32_t eax_217 =
                                                sub_434540(eax_207.b, edx_50, ecx_134, "#OBJECT.")
                                            char* ecx_141 = var_300c
                                            char** edx_51 = &var_300c
                                            
                                            if (eax_217 != 0)
                                                int32_t eax_239 = sub_434540(eax_217.b, edx_51, 
                                                    ecx_141, "#OBJDISP.")
                                                char* ecx_158 = var_300c
                                                char** edx_59 = &var_300c
                                                
                                                if (eax_239 != 0)
                                                    int32_t eax_262 = sub_434540(eax_239.b, edx_59, 
                                                        ecx_158, "#HAIKEICHR_")
                                                    char* ecx_166 = var_300c
                                                    void** edx_62 = &var_300c
                                                    
                                                    if (eax_262 != 0)
                                                        int32_t eax_292 = sub_434540(eax_262.b, 
                                                            edx_62, ecx_166, "#DSTRACK=")
                                                        char* ecx_187 = var_300c
                                                        char** edx_68 = &var_300c
                                                        
                                                        if (eax_292 != 0)
                                                            int32_t eax_317 = sub_434540(eax_292.b, 
                                                                edx_68, ecx_187, "#CDTRACK=")
                                                            char* ecx_213 = var_300c
                                                            char** edx_79 = &var_300c
                                                            
                                                            if (eax_317 != 0)
                                                                int32_t eax_373 = sub_434540(eax_317.b, 
                                                                    edx_79, ecx_213, "#SE.")
                                                                char* ecx_258 = var_300c
                                                                char** edx_105 = &var_300c
                                                                
                                                                if (eax_373 != 0)
                                                                    int32_t eax_390 = sub_434540(eax_373.b, 
                                                                        edx_105, ecx_258, "#PCM_VOLMOD.")
                                                                    char* ecx_272 = var_300c
                                                                    char** edx_112 = &var_300c
                                                                    
                                                                    if (eax_390 != 0)
                                                                        int32_t eax_409 = sub_434540(eax_390.b, 
                                                                            edx_112, ecx_272, "#SHAKE.")
                                                                        char* ecx_287 = var_300c
                                                                        char** edx_115 = &var_300c
                                                                        
                                                                        if (eax_409 != 0)
                                                                            int32_t eax_424 = sub_434540(eax_409.b, 
                                                                                edx_115, ecx_287, "#SHAKEZOOM.")
                                                                            char* ecx_299 = var_300c
                                                                            char** edx_122 = &var_300c
                                                                            
                                                                            if (eax_424 != 0)
                                                                                int32_t eax_439
                                                                                int32_t ecx_310
                                                                                eax_439, ecx_310 = sub_434540(
                                                                                    eax_424.b, edx_122, ecx_299, "#NAMAE="")
                                                                                
                                                                                if (eax_439 != 0)
                                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                    return 1
                                                                                
                                                                                int32_t var_10_154 = ecx_310
                                                                                
                                                                                if (sub_4d1140(&var_1008, &var_300c, 
                                                                                        var_300c, &var_1008, 0x1000) != 0)
                                                                                    esi = 1
                                                                                else
                                                                                    int32_t eax_442 = data_12dc2b4
                                                                                    
                                                                                    if (eax_442 s< 0x200)
                                                                                        sub_4cfdf0(eax_442, &var_1008, 
                                                                                            eax_442 * 0x98 + 0x12c92b5, 0x40)
                                                                                        int32_t eax_443 = sub_4cfc80(&var_1008)
                                                                                        char* var_14_28 = &data_614d74
                                                                                        *(data_12dc2b4 * 0x98 +
                                                                                            &data_12c92f8) = eax_443
                                                                                        int32_t eax_444
                                                                                        int32_t ecx_317
                                                                                        eax_444, ecx_317 = sub_434540(
                                                                                            eax_443.b, &var_300c, var_300c, 
                                                                                            var_14_28)
                                                                                        
                                                                                        if (eax_444 == 0)
                                                                                            int32_t var_10_156 = ecx_317
                                                                                            void* eax_446 = sub_4d1140(&var_1008, 
                                                                                                &var_300c, var_300c, &var_1008, 0x1000)
                                                                                            
                                                                                            if (eax_446 == 0)
                                                                                                sub_4cfdf0(eax_446, &var_1008, 
                                                                                                    data_12dc2b4 * 0x98 + &data_12c92fc, 
                                                                                                    0x40)
                                                                                                int32_t eax_447 = sub_4cfc80(&var_1008)
                                                                                                char* var_14_30 = &data_616154
                                                                                                *(data_12dc2b4 * 0x98 + 0x12c933c) =
                                                                                                    eax_447
                                                                                                int32_t eax_448
                                                                                                int32_t* ecx_324
                                                                                                eax_448, ecx_324 = sub_434540(
                                                                                                    eax_447.b, &var_300c, var_300c, 
                                                                                                    var_14_30)
                                                                                                
                                                                                                if (eax_448 == 0)
                                                                                                    int32_t* var_10_158 = &var_3018
                                                                                                    void* eax_450 = sub_4d1280(&var_3008, 
                                                                                                        &var_300c, var_300c, &var_3008, ecx_324)
                                                                                                    
                                                                                                    if (eax_450 == 0)
                                                                                                        char* var_10_159 = &data_614ef0
                                                                                                        *(data_12dc2b4 * 0x98 + 0x12c9340) =
                                                                                                            var_3008
                                                                                                        *(data_12dc2b4 * 0x98 + 0x12c9344) =
                                                                                                            var_3004.d
                                                                                                        int32_t eax_453 = var_3000.d
                                                                                                        *(data_12dc2b4 * 0x98 + 0x12c9348) =
                                                                                                            eax_453
                                                                                                        
                                                                                                        if (sub_434540(eax_453.b, &var_300c, 
                                                                                                                var_300c, var_10_159) == 0)
                                                                                                            data_12dc2b4 += 1
                                                                                                            *arg2 = eax_450
                                                                                                            *hWnd_5 = var_300c
                                                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                            return 0
                                                                                            
                                                                                            esi = 1
                                                                            else
                                                                                void* eax_426 = sub_4d11d0(&var_3010, 
                                                                                    edx_122, ecx_299, &var_3010)
                                                                                void* esi_64 = eax_426
                                                                                
                                                                                if (esi_64 == 0 && var_3010 u<= 0x1f)
                                                                                    int32_t eax_427 = sub_434540(eax_426.b, 
                                                                                        &var_300c, var_300c, "=")
                                                                                    
                                                                                    if (eax_427 == 0)
                                                                                        int32_t edi_20 = 0
                                                                                        int32_t eax_428
                                                                                        int32_t* ecx_302
                                                                                        eax_428, ecx_302 = sub_434540(
                                                                                            eax_427.b, &var_300c, var_300c, "(")
                                                                                        
                                                                                        if (eax_428 != 0)
                                                                                        label_440c51:
                                                                                            *(var_3010 * 0x104 + &data_12c7234) =
                                                                                                edi_20
                                                                                            *arg2 = esi_64
                                                                                            *hWnd_5 = var_300c
                                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                            return 0
                                                                                        
                                                                                        while (true)
                                                                                            int32_t* var_10_150 = &var_3018
                                                                                            void* eax_430 = sub_4d1280(&var_3008, 
                                                                                                &var_300c, var_300c, &var_3008, ecx_302)
                                                                                            esi_64 = eax_430
                                                                                            
                                                                                            if (esi_64 != 0)
                                                                                                break
                                                                                            
                                                                                            int32_t eax_431 = sub_434540(eax_430.b, 
                                                                                                &var_300c, var_300c, ")")
                                                                                            
                                                                                            if (eax_431 != 0)
                                                                                                break
                                                                                            
                                                                                            if (edi_20 s< 0x20)
                                                                                                void* ecx_305 =
                                                                                                    var_3010 * 0x104 + (edi_20 << 3)
                                                                                                *(ecx_305 + 0x12c7238) = var_3008
                                                                                                edi_20 += 1
                                                                                                eax_431 = var_3004.d
                                                                                                *(ecx_305 + 0x12c723c) = eax_431
                                                                                            
                                                                                            int32_t eax_434
                                                                                            eax_434, ecx_302 = sub_434540(
                                                                                                eax_431.b, &var_300c, var_300c, "(")
                                                                                            
                                                                                            if (eax_434 != 0)
                                                                                                goto label_440c51
                                                                                
                                                                                esi = 1
                                                                        else
                                                                            void* eax_411 = sub_4d11d0(&var_3010, 
                                                                                edx_115, ecx_287, &var_3010)
                                                                            void* esi_62 = eax_411
                                                                            
                                                                            if (esi_62 == 0 && var_3010 u<= 0x1f)
                                                                                int32_t eax_412 = sub_434540(eax_411.b, 
                                                                                    &var_300c, var_300c, "=")
                                                                                
                                                                                if (eax_412 == 0)
                                                                                    int32_t edi_19 = 0
                                                                                    int32_t eax_413
                                                                                    int32_t* ecx_290
                                                                                    eax_413, ecx_290 = sub_434540(
                                                                                        eax_412.b, &var_300c, var_300c, "(")
                                                                                    
                                                                                    if (eax_413 != 0)
                                                                                    label_440af4:
                                                                                        *(var_3010 * 0x184 + &data_12c41b4) =
                                                                                            edi_19
                                                                                        *arg2 = esi_62
                                                                                        *hWnd_5 = var_300c
                                                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    hWnd_2 = nullptr
                                                                                    
                                                                                    while (true)
                                                                                        int32_t* var_10_143 = &var_3018
                                                                                        void* eax_415 = sub_4d1280(&var_3008, 
                                                                                            &var_300c, var_300c, &var_3008, ecx_290)
                                                                                        esi_62 = eax_415
                                                                                        
                                                                                        if (esi_62 != 0)
                                                                                            break
                                                                                        
                                                                                        int32_t eax_416 = sub_434540(eax_415.b, 
                                                                                            &var_300c, var_300c, ")")
                                                                                        
                                                                                        if (eax_416 != 0)
                                                                                            break
                                                                                        
                                                                                        if (edi_19 s< 0x20)
                                                                                            edi_19 += 1
                                                                                            char** hWnd_4 = hWnd_2
                                                                                            int32_t* eax_417 = var_3008
                                                                                            void* ecx_294 =
                                                                                                var_3010 * 0x184 + hWnd_4
                                                                                            hWnd_2 = &hWnd_4[3]
                                                                                            *(ecx_294 + 0x12c41b8) = eax_417
                                                                                            *(ecx_294 + 0x12c41bc) = var_3004.d
                                                                                            eax_416 = var_3000.d
                                                                                            *(ecx_294 + 0x12c41c0) = eax_416
                                                                                        
                                                                                        int32_t eax_419
                                                                                        eax_419, ecx_290 = sub_434540(
                                                                                            eax_416.b, &var_300c, var_300c, "(")
                                                                                        
                                                                                        if (eax_419 != 0)
                                                                                            goto label_440af4
                                                                            
                                                                            esi = 1
                                                                    else
                                                                        int32_t eax_392 = sub_4d11d0(&var_3010, 
                                                                            edx_112, ecx_272, &var_3010)
                                                                        
                                                                        if (eax_392 != 0)
                                                                            esi = 1
                                                                        else
                                                                            int32_t edi_18 = var_3010
                                                                            
                                                                            if (edi_18 u> 0xf)
                                                                                esi = 1
                                                                            else if (sub_434540(eax_392.b, 
                                                                                    &var_300c, var_300c, "=") != 0)
                                                                                esi = 1
                                                                            else
                                                                                esi = sub_4d11d0(&var_3008, &var_300c, 
                                                                                    var_300c, &var_3008)
                                                                                
                                                                                if (esi != 0)
                                                                                    esi = 1
                                                                                else
                                                                                    switch (var_3008)
                                                                                        case nullptr
                                                                                            *(edi_18 + &data_12c41a4) = 0
                                                                                            *arg2 = esi
                                                                                            *hWnd_5 = var_300c
                                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                            return 0
                                                                                        case 1
                                                                                            *(edi_18 + &data_12c41a4) = 1
                                                                                            *arg2 = esi
                                                                                            *hWnd_5 = var_300c
                                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                            return 0
                                                                                        case 2
                                                                                            *(edi_18 + &data_12c41a4) = 2
                                                                                            *arg2 = esi
                                                                                            *hWnd_5 = var_300c
                                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                            return 0
                                                                                        case 3
                                                                                            *(edi_18 + &data_12c41a4) = 3
                                                                                            *arg2 = esi
                                                                                            *hWnd_5 = var_300c
                                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                            return 0
                                                                else
                                                                    void* eax_375 = sub_4d11d0(&var_3010, 
                                                                        edx_105, ecx_258, &var_3010)
                                                                    
                                                                    if (eax_375 == 0)
                                                                        int32_t edi_16 = var_3010
                                                                        
                                                                        if (edi_16 u<= 0x1f)
                                                                            int32_t eax_376
                                                                            int32_t ecx_260
                                                                            eax_376, ecx_260 = sub_434540(
                                                                                eax_375.b, &var_300c, var_300c, "="")
                                                                            
                                                                            if (eax_376 == 0)
                                                                                int32_t var_10_129 = ecx_260
                                                                                void* eax_378 = sub_4d1140(&var_1008, 
                                                                                    &var_300c, var_300c, &var_1008, 0x1000)
                                                                                
                                                                                if (eax_378 == 0)
                                                                                    if (sub_434540(eax_378.b, &var_300c, 
                                                                                            var_300c, "=") != 0)
                                                                                        if (data_702fc0 != 0)
                                                                                            char** hWnd_1 = hWnd_2
                                                                                            
                                                                                            if (hWnd_1 != 0)
                                                                                                MessageBoxA(hWnd_1, "Gameexe.ini ", 
                                                                                                    0x614efc, MB_OK)
                                                                                        
                                                                                        int32_t eax_386 = edi_16 * 5
                                                                                        sub_4cfdf0(eax_386, &var_1008, 
                                                                                            (eax_386 << 3) + &data_12c3ca4, 0x24)
                                                                                        *arg2 = eax_375
                                                                                        *hWnd_5 = var_300c
                                                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                        return 0
                                                                                    
                                                                                    int32_t eax_381 = sub_4d11d0(&var_3008, 
                                                                                        &var_300c, var_300c, &var_3008)
                                                                                    
                                                                                    if (eax_381 == 0)
                                                                                        int32_t edi_17 = edi_16 * 5
                                                                                        sub_4cfdf0(eax_381, &var_1008, 
                                                                                            (edi_17 << 3) + &data_12c3ca4, 0x24)
                                                                                        (&data_12c3cc8)[edi_17 * 2] = var_3008
                                                                                        *arg2 = eax_375
                                                                                        *hWnd_5 = var_300c
                                                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                        return 0
                                                                    
                                                                    esi = 1
                                                            else
                                                                int32_t eax_319 = sub_4d11d0(&var_3008, 
                                                                    edx_79, ecx_213, &var_3008)
                                                                
                                                                if (eax_319 != 0)
                                                                    esi = 1
                                                                else if (sub_434540(eax_319.b, 
                                                                        &var_300c, var_300c, ":") != 0)
                                                                    esi = 1
                                                                else
                                                                    int32_t eax_322 = sub_4d11d0(&var_3004, 
                                                                        &var_300c, var_300c, &var_3004)
                                                                    
                                                                    if (eax_322 != 0)
                                                                        esi = 1
                                                                    else if (sub_434540(eax_322.b, 
                                                                            &var_300c, var_300c, ":") != 0)
                                                                        esi = 1
                                                                    else
                                                                        int32_t eax_325 = sub_4d11d0(&var_3000, 
                                                                            &var_300c, var_300c, &var_3000)
                                                                        
                                                                        if (eax_325 != 0)
                                                                            esi = 1
                                                                        else if (sub_434540(eax_325.b, 
                                                                                &var_300c, var_300c, ":") != 0)
                                                                            esi = 1
                                                                        else
                                                                            int32_t eax_328 = sub_4d11d0(&var_2ffc, 
                                                                                &var_300c, var_300c, &var_2ffc)
                                                                            
                                                                            if (eax_328 != 0)
                                                                                esi = 1
                                                                            else if (sub_434540(eax_328.b, 
                                                                                    &var_300c, var_300c, "-") != 0)
                                                                                esi = 1
                                                                            else
                                                                                int32_t eax_331 = sub_4d11d0(&var_2ff8, 
                                                                                    &var_300c, var_300c, &var_2ff8)
                                                                                
                                                                                if (eax_331 != 0)
                                                                                    esi = 1
                                                                                else if (sub_434540(eax_331.b, 
                                                                                        &var_300c, var_300c, ":") != 0)
                                                                                    esi = 1
                                                                                else
                                                                                    int32_t eax_334 = sub_4d11d0(&var_2ff4, 
                                                                                        &var_300c, var_300c, &var_2ff4)
                                                                                    
                                                                                    if (eax_334 != 0)
                                                                                        esi = 1
                                                                                    else if (sub_434540(eax_334.b, 
                                                                                            &var_300c, var_300c, ":") != 0)
                                                                                        esi = 1
                                                                                    else
                                                                                        int32_t eax_337 = sub_4d11d0(&var_2ff0, 
                                                                                            &var_300c, var_300c, &var_2ff0)
                                                                                        
                                                                                        if (eax_337 != 0)
                                                                                            esi = 1
                                                                                        else if (sub_434540(eax_337.b, 
                                                                                                &var_300c, var_300c, ":") != 0)
                                                                                            esi = 1
                                                                                        else
                                                                                            int32_t eax_340 = sub_4d11d0(&var_2fec, 
                                                                                                &var_300c, var_300c, &var_2fec)
                                                                                            
                                                                                            if (eax_340 != 0)
                                                                                                esi = 1
                                                                                            else if (sub_434540(eax_340.b, 
                                                                                                    &var_300c, var_300c, "-") != 0)
                                                                                                esi = 1
                                                                                            else
                                                                                                int32_t eax_343 = sub_4d11d0(&var_2fe8, 
                                                                                                    &var_300c, var_300c, &var_2fe8)
                                                                                                
                                                                                                if (eax_343 != 0)
                                                                                                    esi = 1
                                                                                                else if (sub_434540(eax_343.b, 
                                                                                                        &var_300c, var_300c, ":") != 0)
                                                                                                    esi = 1
                                                                                                else
                                                                                                    int32_t eax_346 = sub_4d11d0(&var_2fe4, 
                                                                                                        &var_300c, var_300c, &var_2fe4)
                                                                                                    
                                                                                                    if (eax_346 != 0)
                                                                                                        esi = 1
                                                                                                    else if (sub_434540(eax_346.b, 
                                                                                                            &var_300c, var_300c, ":") != 0)
                                                                                                        esi = 1
                                                                                                    else
                                                                                                        int32_t eax_349 = sub_4d11d0(&var_2fe0, 
                                                                                                            &var_300c, var_300c, &var_2fe0)
                                                                                                        
                                                                                                        if (eax_349 != 0)
                                                                                                            esi = 1
                                                                                                        else if (sub_434540(eax_349.b, 
                                                                                                                &var_300c, var_300c, ":") != 0)
                                                                                                            esi = 1
                                                                                                        else
                                                                                                            void* eax_352 = sub_4d11d0(&var_2fdc, 
                                                                                                                &var_300c, var_300c, &var_2fdc)
                                                                                                            esi = eax_352
                                                                                                            
                                                                                                            if (esi != 0)
                                                                                                                esi = 1
                                                                                                            else
                                                                                                                int32_t eax_353
                                                                                                                int32_t ecx_237
                                                                                                                eax_353, ecx_237 = sub_434540(
                                                                                                                    eax_352.b, &var_300c, var_300c, "="")
                                                                                                                
                                                                                                                if (eax_353 != 0)
                                                                                                                    esi = 1
                                                                                                                else
                                                                                                                    int32_t var_10_124 = ecx_237
                                                                                                                    
                                                                                                                    if (sub_4d1140(&var_1008, &var_300c, 
                                                                                                                            var_300c, &var_1008, 0x1000) != 0)
                                                                                                                        esi = 1
                                                                                                                    else
                                                                                                                        int32_t var_10_125 = 0x24
                                                                                                                        *(data_12c3ca0 * 0x58 + 0x12c10a0) =
                                                                                                                            var_3008
                                                                                                                        *(data_12c3ca0 * 0x58 + 0x12c10a4) =
                                                                                                                            var_3004.d
                                                                                                                        *(data_12c3ca0 * 0x58 + 0x12c10a8) =
                                                                                                                            var_3000.d
                                                                                                                        *(data_12c3ca0 * 0x58 + 0x12c10ac) =
                                                                                                                            var_2ffc
                                                                                                                        *(data_12c3ca0 * 0x58 + 0x12c10c0) =
                                                                                                                            var_2ff8
                                                                                                                        *(data_12c3ca0 * 0x58 + 0x12c10c4) =
                                                                                                                            var_2ff4
                                                                                                                        *(data_12c3ca0 * 0x58 + 0x12c10c8) =
                                                                                                                            var_2ff0
                                                                                                                        *(data_12c3ca0 * 0x58 + 0x12c10cc) =
                                                                                                                            var_2fec
                                                                                                                        *(data_12c3ca0 * 0x58 + 0x12c10b0) =
                                                                                                                            var_2fe8
                                                                                                                        *(data_12c3ca0 * 0x58 + 0x12c10b4) =
                                                                                                                            var_2fe4
                                                                                                                        *(data_12c3ca0 * 0x58 + 0x12c10b8) =
                                                                                                                            var_2fe0
                                                                                                                        int32_t eax_367 = var_2fdc
                                                                                                                        *(data_12c3ca0 * 0x58 + 0x12c10bc) =
                                                                                                                            eax_367
                                                                                                                        sub_4cfdf0(eax_367, &var_1008, 
                                                                                                                            data_12c3ca0 * 0x58 + &data_12c10d0, 
                                                                                                                            var_10_125)
                                                                                                                        int32_t eax_368 = data_12c3ca0
                                                                                                                        int32_t ecx_253 = eax_368 * 0x58
                                                                                                                        void* ecx_254 = ecx_253 + &data_12c10d0
                                                                                                                        
                                                                                                                        if (ecx_253 != 0xfed3ef30)
                                                                                                                            while (true)
                                                                                                                                eax_368.b = *ecx_254
                                                                                                                                
                                                                                                                                if (eax_368.b u>= 0x80 && (
                                                                                                                                        eax_368.b u< 0xa0 || eax_368.b u> 0xdf)
                                                                                                                                        && eax_368.b u< 0xfe)
                                                                                                                                    ecx_254 += 2
                                                                                                                                    continue
                                                                                                                                
                                                                                                                                if (eax_368.b == 0)
                                                                                                                                    break
                                                                                                                                
                                                                                                                                if (eax_368.b u>= 0x61
                                                                                                                                        && eax_368.b u<= 0x7a)
                                                                                                                                    eax_368.b -= 0x20
                                                                                                                                    *ecx_254 = eax_368.b
                                                                                                                                
                                                                                                                                ecx_254 += 1
                                                                                                                            
                                                                                                                            eax_368 = data_12c3ca0
                                                                                                                        
                                                                                                                        if (eax_368 s< 0x7f)
                                                                                                                            data_12c3ca0 = eax_368 + 1
                                                                                                                            *arg2 = esi
                                                                                                                            *hWnd_5 = var_300c
                                                                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                                                            return 0
                                                        else
                                                            void* eax_294 = sub_4d11d0(&var_3008, 
                                                                edx_68, ecx_187, &var_3008)
                                                            esi = eax_294
                                                            
                                                            if (esi != 0)
                                                                esi = 1
                                                            else if (sub_434540(eax_294.b, 
                                                                    &var_300c, var_300c, "-") == 0)
                                                                void* eax_297 = sub_4d11d0(&var_3004, 
                                                                    &var_300c, var_300c, &var_3004)
                                                                esi = eax_297
                                                                
                                                                if (esi != 0)
                                                                    esi = 1
                                                                else if (sub_434540(eax_297.b, 
                                                                        &var_300c, var_300c, "-") == 0)
                                                                    void* eax_300 = sub_4d11d0(&var_3000, 
                                                                        &var_300c, var_300c, &var_3000)
                                                                    esi = eax_300
                                                                    
                                                                    if (esi != 0)
                                                                        esi = 1
                                                                    else
                                                                        int32_t eax_301
                                                                        int32_t ecx_193
                                                                        eax_301, ecx_193 = sub_434540(
                                                                            eax_300.b, &var_300c, var_300c, "="")
                                                                        
                                                                        if (eax_301 == 0)
                                                                            int32_t var_10_94 = ecx_193
                                                                            void* eax_303 = sub_4d1140(&var_1008, 
                                                                                &var_300c, var_300c, &var_1008, 0x1000)
                                                                            
                                                                            if (eax_303 != 0)
                                                                                esi = 1
                                                                            else
                                                                                int32_t eax_304
                                                                                int32_t ecx_196
                                                                                eax_304, ecx_196 = sub_434540(
                                                                                    eax_303.b, &var_300c, var_300c, "="")
                                                                                
                                                                                if (eax_304 == 0)
                                                                                    int32_t var_10_96 = ecx_196
                                                                                    char var_2008[0x1000]
                                                                                    
                                                                                    if (sub_4d1140(&var_2008, &var_300c, 
                                                                                            var_300c, &var_2008, 0x1000) != 0)
                                                                                        esi = 1
                                                                                    else
                                                                                        *(data_12c109c * 0x5c + 0x12be29c) =
                                                                                            var_3008
                                                                                        *(data_12c109c * 0x5c + 0x12be2a0) =
                                                                                            var_3000.d
                                                                                        *(data_12c109c * 0x5c + 0x12be2a4) =
                                                                                            var_3004.d
                                                                                        int32_t eax_310 = data_12c109c
                                                                                        void* ecx_201 = eax_310 * 0x5c
                                                                                        
                                                                                        if (*(ecx_201 + 0x12be2a4) == 0x5f5e0ff)
                                                                                            *(ecx_201 + 0x12be2a4) = 0xffffffff
                                                                                            eax_310 = data_12c109c
                                                                                        
                                                                                        sub_4cfdf0(eax_310, &var_1008, 
                                                                                            eax_310 * 0x5c + 0x12be2a8, 0x24)
                                                                                        int32_t eax_311 = data_12c109c
                                                                                        void* ecx_204 = eax_311 * 0x5c
                                                                                        char* ecx_205 = ecx_204 + 0x12be2a8
                                                                                        
                                                                                        if (ecx_204 != 0xfed41d58)
                                                                                            while (true)
                                                                                                eax_311.b = *ecx_205
                                                                                                
                                                                                                if (eax_311.b u>= 0x80 && (
                                                                                                        eax_311.b u< 0xa0 || eax_311.b u> 0xdf)
                                                                                                        && eax_311.b u< 0xfe)
                                                                                                    ecx_205 = &ecx_205[2]
                                                                                                    continue
                                                                                                
                                                                                                if (eax_311.b == 0)
                                                                                                    break
                                                                                                
                                                                                                if (eax_311.b u>= 0x61
                                                                                                        && eax_311.b u<= 0x7a)
                                                                                                    eax_311.b -= 0x20
                                                                                                    *ecx_205 = eax_311.b
                                                                                                
                                                                                                ecx_205 = &ecx_205[1]
                                                                                            
                                                                                            eax_311 = data_12c109c
                                                                                        
                                                                                        sub_4cfdf0(eax_311, &var_2008, 
                                                                                            eax_311 * 0x5c + &data_12be2cc, 0x24)
                                                                                        int32_t eax_312 = data_12c109c
                                                                                        int32_t ecx_208 = eax_312 * 0x5c
                                                                                        void* ecx_209 = ecx_208 + &data_12be2cc
                                                                                        
                                                                                        if (ecx_208 != 0xfed41d34)
                                                                                            while (true)
                                                                                                eax_312.b = *ecx_209
                                                                                                
                                                                                                if (eax_312.b u>= 0x80 && (
                                                                                                        eax_312.b u< 0xa0 || eax_312.b u> 0xdf)
                                                                                                        && eax_312.b u< 0xfe)
                                                                                                    ecx_209 += 2
                                                                                                    continue
                                                                                                
                                                                                                if (eax_312.b == 0)
                                                                                                    break
                                                                                                
                                                                                                if (eax_312.b u>= 0x61
                                                                                                        && eax_312.b u<= 0x7a)
                                                                                                    eax_312.b -= 0x20
                                                                                                    *ecx_209 = eax_312.b
                                                                                                
                                                                                                ecx_209 += 1
                                                                                            
                                                                                            eax_312 = data_12c109c
                                                                                        
                                                                                        if (eax_312 s< 0x7f)
                                                                                            data_12c109c = eax_312 + 1
                                                                                            *arg2 = esi
                                                                                            *hWnd_5 = var_300c
                                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                            return 0
                                                    else
                                                        int32_t eax_263 = sub_434540(eax_262.b, 
                                                            edx_62, ecx_166, "BUFNO=")
                                                        char* ecx_167 = var_300c
                                                        char** edx_63 = &var_300c
                                                        
                                                        if (eax_263 != 0)
                                                            int32_t eax_273
                                                            int32_t* ecx_174
                                                            eax_273, ecx_174 = sub_434540(
                                                                eax_263.b, edx_63, ecx_167, "LAYER=")
                                                            char** edx_64 = &var_300c
                                                            
                                                            if (eax_273 != 0)
                                                                if (sub_434540(eax_273.b, edx_64, 
                                                                        var_300c, "PARAM.") == 0)
                                                                    int32_t eax_283 = sub_4d11d0(&var_3010, 
                                                                        &var_300c, var_300c, &var_3010)
                                                                    
                                                                    if (eax_283 == 0)
                                                                        int32_t edi_15 = var_3010
                                                                        
                                                                        if (edi_15 u<= 0xff)
                                                                            int32_t eax_284
                                                                            int32_t* ecx_182
                                                                            eax_284, ecx_182 = sub_434540(
                                                                                eax_283.b, &var_300c, var_300c, "=")
                                                                            
                                                                            if (eax_284 == 0)
                                                                                int32_t* var_10_86 = &var_3018
                                                                                void* eax_286 = sub_4d1280(&var_3008, 
                                                                                    &var_300c, var_300c, &var_3008, ecx_182)
                                                                                
                                                                                if (eax_286 == 0)
                                                                                    (&data_12bda9c)[edi_15 * 2] = var_3008
                                                                                    (&data_12bdaa0)[edi_15 * 2] = var_3004.d
                                                                                    *arg2 = eax_286
                                                                                    *hWnd_5 = var_300c
                                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                    return 0
                                                            else
                                                                int32_t* var_10_82 = &var_3018
                                                                void* eax_275 = sub_4d1280(&var_3008, 
                                                                    edx_64, var_300c, &var_3008, ecx_174)
                                                                
                                                                if (eax_275 == 0)
                                                                    data_12bda94 = var_3008
                                                                    data_12bda98 = var_3004.d
                                                                    *arg2 = eax_275
                                                                    *hWnd_5 = var_300c
                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                    return 0
                                                        else
                                                            void* eax_265 = sub_4d11d0(&var_3008, 
                                                                edx_63, ecx_167, &var_3008)
                                                            
                                                            if (eax_265 == 0)
                                                                int32_t* eax_266 = var_3008
                                                                
                                                                if (eax_266 s< 0)
                                                                    data_12bda90 = 0
                                                                    *arg2 = eax_265
                                                                    *hWnd_5 = var_300c
                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                    return 0
                                                                
                                                                if (eax_266 s> 0x1f6)
                                                                    eax_266 = 0x1f6
                                                                
                                                                data_12bda90 = eax_266
                                                                *arg2 = eax_265
                                                                *hWnd_5 = var_300c
                                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                return 0
                                                        
                                                        esi = 1
                                                else
                                                    int32_t eax_241 = sub_4d11d0(&var_3010, edx_59, 
                                                        ecx_158, &var_3010)
                                                    
                                                    if (eax_241 == 0)
                                                        int32_t edi_14 = var_3010
                                                        
                                                        if (edi_14 u<= 0xff)
                                                            int32_t eax_242
                                                            int32_t* ecx_160
                                                            eax_242, ecx_160 = sub_434540(
                                                                eax_241.b, &var_300c, var_300c, "=")
                                                            
                                                            if (eax_242 == 0)
                                                                int32_t* var_10_77 = &var_3018
                                                                void* eax_244 = sub_4d1280(&var_3008, 
                                                                    &var_300c, var_300c, &var_3008, ecx_160)
                                                                
                                                                if (eax_244 == 0)
                                                                    int32_t ecx_162 = edi_14 * 3
                                                                    *((ecx_162 << 3) + &data_12b79fc) =
                                                                        var_3008.b
                                                                    *((ecx_162 << 3) + &data_12b79fd) =
                                                                        var_3004
                                                                    *((ecx_162 << 3) + &data_12b79fe) =
                                                                        var_3000
                                                                    *((ecx_162 << 3) + &data_12b7a00) =
                                                                        var_2ffc.w
                                                                    *((ecx_162 << 3) + &data_12b7a02) =
                                                                        var_2ff8.w
                                                                    *((ecx_162 << 3) + &data_12b7a04) =
                                                                        var_2ff4.b
                                                                    *((ecx_162 << 3) + &data_12b7a05) =
                                                                        var_2ff0.b
                                                                    *((ecx_162 << 3) + &data_12b7a06) =
                                                                        var_2fec.b
                                                                    *((ecx_162 << 3) + &data_12b7a08) =
                                                                        var_2fe8.w
                                                                    *((ecx_162 << 3) + &data_12b7a0a) =
                                                                        var_2fe4.b
                                                                    *((ecx_162 << 3) + &data_12b7a0c) =
                                                                        var_2fe0.w
                                                                    *((ecx_162 << 3) + &data_12b7a0e) =
                                                                        var_2fdc.b
                                                                    *((ecx_162 << 3) + &data_12b7a10) =
                                                                        var_2fd8.w
                                                                    *((ecx_162 << 3) + &data_12b7a12) =
                                                                        var_2fd4.b
                                                                    *arg2 = eax_244
                                                                    *hWnd_5 = var_300c
                                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                    return 0
                                                    
                                                    esi = 1
                                            else
                                                int32_t eax_219 = sub_4d11d0(&var_3010, edx_51, 
                                                    ecx_141, &var_3010)
                                                
                                                if (eax_219 == 0)
                                                    int32_t esi_39 = var_3010
                                                    
                                                    if (esi_39 == 0x3e7)
                                                    label_43fa18:
                                                        int32_t eax_220
                                                        int32_t* ecx_143
                                                        eax_220, ecx_143 = sub_434540(eax_219.b, 
                                                            &var_300c, var_300c, "=")
                                                        char** edx_53 = &var_300c
                                                        
                                                        if (eax_220 != 0)
                                                            if (sub_434540(eax_220.b, edx_53, 
                                                                    var_300c, ":") == 0)
                                                                int32_t eax_230 = sub_4d11d0(&var_3010, 
                                                                    &var_300c, var_300c, &var_3010)
                                                                
                                                                if (eax_230 == 0)
                                                                    int32_t edi_13 = var_3010
                                                                    
                                                                    if (edi_13 u<= 0x1ff)
                                                                        int32_t eax_231
                                                                        int32_t* ecx_152
                                                                        eax_231, ecx_152 = sub_434540(
                                                                            eax_230.b, &var_300c, var_300c, "=")
                                                                        
                                                                        if (eax_231 == 0)
                                                                            int32_t* var_10_72 = &var_3018
                                                                            
                                                                            if (sub_4d1280(&var_3008, &var_300c, 
                                                                                    var_300c, &var_3008, ecx_152) == 0)
                                                                                *arg2 = sub_436f50(&var_3008, edi_13, 
                                                                                    esi_39, var_3018, &var_3008, hWnd_2)
                                                                                *hWnd_5 = var_300c
                                                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                                return 0
                                                        else
                                                            int32_t* var_10_67 = &var_3018
                                                            
                                                            if (sub_4d1280(&var_3008, edx_53, 
                                                                    var_300c, &var_3008, ecx_143) == 0)
                                                                *arg2 = sub_436f50(&var_3008, esi_39, 
                                                                    esi_39, var_3018, &var_3008, hWnd_2)
                                                                *hWnd_5 = var_300c
                                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                return 0
                                                    else if (esi_39 s>= 0 && esi_39 s< 0x200)
                                                        goto label_43fa18
                                                
                                                esi = 1
                                        else
                                            if (sub_4d11d0(&var_3008, edx_50, ecx_134, &var_3008)
                                                    == 0)
                                                int32_t* eax_210 = var_3008
                                                
                                                if (eax_210 s<= 0)
                                                    data_7031bc = 1
                                                    *arg2 = nullptr
                                                    *hWnd_5 = var_300c
                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                    return 0
                                                
                                                if (eax_210 s> 0x200)
                                                    eax_210 = 0x200
                                                
                                                data_7031bc = eax_210
                                                *arg2 = nullptr
                                                *hWnd_5 = var_300c
                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                return 0
                                            
                                            esi = 1
                                    else
                                        int32_t eax_184 =
                                            sub_4d11d0(&var_3010, edx_42, ecx_114, &var_3010)
                                        
                                        if (eax_184 != 0)
                                            esi = 1
                                        else
                                            int32_t edi_12 = var_3010
                                            
                                            if (edi_12 == 0x3e7 || (edi_12 s>= 0 && edi_12 s< 0x20))
                                                int32_t eax_185
                                                int32_t* ecx_116
                                                eax_185, ecx_116 =
                                                    sub_434540(eax_184.b, &var_300c, var_300c, "=")
                                                char** edx_44 = &var_300c
                                                
                                                if (eax_185 != 0)
                                                    if (sub_434540(eax_185.b, edx_44, var_300c, ":")
                                                            != 0)
                                                        esi = 1
                                                    else
                                                        int32_t eax_198 = sub_4d11d0(&var_3010, 
                                                            &var_300c, var_300c, &var_3010)
                                                        
                                                        if (eax_198 != 0 || edi_12 u> 0x1f
                                                                || var_3010 u> 0x1f)
                                                            esi = 1
                                                        else
                                                            int32_t eax_199
                                                            int32_t* ecx_128
                                                            eax_199, ecx_128 = sub_434540(
                                                                eax_198.b, &var_300c, var_300c, "=")
                                                            
                                                            if (eax_199 != 0)
                                                                esi = 1
                                                            else
                                                                int32_t* var_10_60 = &var_3018
                                                                esi = sub_4d1280(&var_3008, &var_300c, 
                                                                    var_300c, &var_3008, ecx_128)
                                                                
                                                                if (esi != 0)
                                                                    esi = 1
                                                                else
                                                                    if (edi_12 s< 8)
                                                                        int32_t edx_49 = var_3010
                                                                        
                                                                        if (edx_49 s< 8)
                                                                            *arg2 = sub_437110(&var_3008, edx_49, 
                                                                                edi_12, var_3018, &var_3008, hWnd_2)
                                                                            *hWnd_5 = var_300c
                                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                            return 0
                                                                    
                                                                label_43f76f:
                                                                    char** hWnd = hWnd_2
                                                                    
                                                                    if (hWnd != 0)
                                                                        MessageBoxA(hWnd, "Gameexe.ini ", 
                                                                            0x614efc, MB_OK)
                                                                        *arg2 = esi
                                                                        *hWnd_5 = var_300c
                                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                        return 0
                                                else
                                                    int32_t* var_10_54 = &var_3018
                                                    esi = sub_4d1280(&var_3008, edx_44, var_300c, 
                                                        &var_3008, ecx_116)
                                                    
                                                    if (esi == 0)
                                                        if (edi_12 == 0x3e7)
                                                        label_43f7e5:
                                                            *arg2 = sub_437110(&var_3008, edi_12, 
                                                                edi_12, var_3018, &var_3008, hWnd_2)
                                                            *hWnd_5 = var_300c
                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                            return 0
                                                        
                                                        if (edi_12 s>= 0 && edi_12 s< 8)
                                                            goto label_43f7e5
                                                        
                                                        goto label_43f76f
                                                    
                                                    esi = 1
                                            else
                                                esi = 1
                                else
                                    int32_t eax_154 =
                                        sub_4d11d0(&var_3010, edx_39, ecx_104, &var_3010)
                                    
                                    if (eax_154 != 0)
                                        esi = 1
                                    else
                                        int32_t edi_11 = var_3010
                                        
                                        if (edi_11 u> 0x3e7)
                                            esi = 1
                                        else
                                            int32_t eax_155
                                            int32_t* ecx_106
                                            eax_155, ecx_106 =
                                                sub_434540(eax_154.b, &var_300c, var_300c, "=")
                                            
                                            if (eax_155 != 0)
                                                esi = 1
                                            else
                                                int32_t* var_10_50 = &var_3018
                                                esi = sub_4d1280(&var_3008, &var_300c, var_300c, 
                                                    &var_3008, ecx_106)
                                                
                                                if (esi != 0)
                                                    esi = 1
                                                else
                                                    int32_t ecx_110 = edi_11 * 0x11
                                                    *((ecx_110 << 2) + &data_12a7084) = var_3008
                                                    *((ecx_110 << 2) + &data_12a7088) = var_3004.d
                                                    *((ecx_110 << 2) + &data_12a708c) = var_3000.d
                                                    *((ecx_110 << 2) + &data_12a7090) = var_2ffc
                                                    *((ecx_110 << 2) + &data_12a7094) = var_2ff8
                                                    *((ecx_110 << 2) + &data_12a7098) = var_2ff4
                                                    int32_t eax_164 = var_2ff0
                                                    
                                                    if (eax_164 s< 0)
                                                        eax_164 = 0
                                                    
                                                    *((ecx_110 << 2) + &data_12a7078) = eax_164
                                                    *((ecx_110 << 2) + &data_12a705c) = var_2fec
                                                    *((ecx_110 << 2) + &data_12a7060) = var_2fe8
                                                    *((ecx_110 << 2) + &data_12a7064) = var_2fe4
                                                    *((ecx_110 << 2) + &data_12a7068) = var_2fe0
                                                    *((ecx_110 << 2) + &data_12a706c) = var_2fdc
                                                    *((ecx_110 << 2) + &data_12a7070) = var_2fd8
                                                    *((ecx_110 << 2) + &data_12a7074) = var_2fd4
                                                    *((ecx_110 << 2) + &data_12a709c) = var_2fd0
                                                    *((ecx_110 << 2) + &data_12a707c) = var_2fcc
                                                    *((ecx_110 << 2) + &data_12a7080) = 1
                                                    *((ecx_110 << 2) + &data_12a708c) +=
                                                        *((ecx_110 << 2) + &data_12a7084) - 1
                                                    *((ecx_110 << 2) + &data_12a7090) +=
                                                        *((ecx_110 << 2) + &data_12a7088) - 1
                                                    int32_t eax_178 =
                                                        *((ecx_110 << 2) + &data_12a709c)
                                                    
                                                    if (eax_178 s<= 0 || eax_178 s> 0xff)
                                                        *((ecx_110 << 2) + &data_12a709c) = 0xff
                                                        *arg2 = esi
                                                        *hWnd_5 = var_300c
                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                        return 0
                            else
                                int32_t eax_124 = sub_4d11d0(&var_3010, edx_36, ecx_91, &var_3010)
                                
                                if (eax_124 != 0)
                                    esi = 1
                                else
                                    int32_t edi_10 = var_3010
                                    
                                    if (edi_10 u> 0x3e7)
                                        esi = 1
                                    else
                                        int32_t eax_125
                                        int32_t* ecx_93
                                        eax_125, ecx_93 =
                                            sub_434540(eax_124.b, &var_300c, var_300c, "=")
                                        
                                        if (eax_125 != 0)
                                            esi = 1
                                        else
                                            int32_t* var_10_46 = &var_3018
                                            esi = sub_4d1280(&var_3008, &var_300c, var_300c, 
                                                &var_3008, ecx_93)
                                            
                                            if (esi != 0)
                                                esi = 1
                                            else
                                                int32_t ecx_97 = edi_10 * 0x11
                                                *((ecx_97 << 2) + &data_12a7084) = var_3008
                                                *((ecx_97 << 2) + &data_12a7088) = var_3004.d
                                                *((ecx_97 << 2) + &data_12a708c) = var_3000.d
                                                *((ecx_97 << 2) + &data_12a7090) = var_2ffc
                                                *((ecx_97 << 2) + &data_12a7094) = var_2ff8
                                                *((ecx_97 << 2) + &data_12a7098) = var_2ff4
                                                int32_t eax_134 = var_2ff0
                                                
                                                if (eax_134 s< 0)
                                                    eax_134 = 0
                                                
                                                *((ecx_97 << 2) + &data_12a7078) = eax_134
                                                *((ecx_97 << 2) + &data_12a705c) = var_2fec
                                                *((ecx_97 << 2) + &data_12a7060) = var_2fe8
                                                *((ecx_97 << 2) + &data_12a7064) = var_2fe4
                                                *((ecx_97 << 2) + &data_12a7068) = var_2fe0
                                                *((ecx_97 << 2) + &data_12a706c) = var_2fdc
                                                *((ecx_97 << 2) + &data_12a7070) = var_2fd8
                                                *((ecx_97 << 2) + &data_12a7074) = var_2fd4
                                                *((ecx_97 << 2) + &data_12a709c) = var_2fd0
                                                *((ecx_97 << 2) + &data_12a707c) = var_2fcc
                                                *((ecx_97 << 2) + &data_12a7080) = 0
                                                int32_t eax_144 = *((ecx_97 << 2) + &data_12a709c)
                                                
                                                if (eax_144 s<= 0 || eax_144 s> 0xff)
                                                    *((ecx_97 << 2) + &data_12a709c) = 0xff
                                                
                                                int32_t eax_145 = *((ecx_97 << 2) + &data_12a707c)
                                                
                                                if (eax_145 s> 0xb)
                                                    *((ecx_97 << 2) + &data_12a707c) = 0xb
                                                    *arg2 = esi
                                                    *hWnd_5 = var_300c
                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                    return 0
                                                
                                                if (eax_145 s< 0xffffffff)
                                                    *((ecx_97 << 2) + &data_12a707c) = 0xffffffff
                                                    *arg2 = esi
                                                    *hWnd_5 = var_300c
                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                    return 0
                        else
                            void* eax_114 = sub_4d11d0(&var_3010, edx_32, ecx_83, &var_3010)
                            
                            if (eax_114 == 0)
                                int32_t edi_9 = var_3010
                                
                                if (edi_9 u<= 0xf)
                                    int32_t eax_115
                                    int32_t ecx_85
                                    eax_115, ecx_85 =
                                        sub_434540(eax_114.b, &var_300c, var_300c, "="")
                                    
                                    if (eax_115 == 0)
                                        int32_t var_10_41 = ecx_85
                                        
                                        if (sub_4d1140(&var_1008, &var_300c, var_300c, &var_1008, 
                                                0x1000) == 0)
                                            int32_t eax_118 = edi_9 * 9
                                            sub_4cfdf0(eax_118, &var_1008, 
                                                (eax_118 << 2) + &data_12a6e1c, 0x24)
                                            *arg2 = eax_114
                                            *hWnd_5 = var_300c
                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                            return 0
                            
                            esi = 1
                    else
                        void* eax_104 = sub_4d11d0(&var_3010, edx_28, ecx_75, &var_3010)
                        
                        if (eax_104 == 0)
                            int32_t edi_8 = var_3010
                            
                            if (edi_8 u<= 0x3f)
                                int32_t eax_105
                                int32_t ecx_77
                                eax_105, ecx_77 = sub_434540(eax_104.b, &var_300c, var_300c, "="")
                                
                                if (eax_105 == 0)
                                    int32_t var_10_36 = ecx_77
                                    
                                    if (sub_4d1140(&var_1008, &var_300c, var_300c, &var_1008, 
                                            0x1000) == 0)
                                        int32_t eax_108 = edi_8 * 9
                                        sub_4cfdf0(eax_108, &var_1008, 
                                            (eax_108 << 2) + &data_12a651c, 0x24)
                                        *arg2 = eax_104
                                        *hWnd_5 = var_300c
                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                        return 0
                        
                        esi = 1
                else
                    void* eax_39 = sub_4d11d0(&var_3010, edx_6, ecx_24, &var_3010)
                    
                    if (eax_39 == 0)
                        int32_t edi_6 = var_3010
                        
                        if (edi_6 u<= 0x1f)
                            int32_t eax_40 = sub_434540(eax_39.b, &var_300c, var_300c, "=")
                            
                            if (eax_40 != 0)
                                int32_t eax_49 = sub_434540(eax_40.b, &var_300c, var_300c, ".")
                                
                                if (eax_49 == 0)
                                    int32_t eax_50 =
                                        sub_434540(eax_49.b, &var_300c, var_300c, "BGM=")
                                    
                                    if (eax_50 != 0)
                                        int32_t eax_57 =
                                            sub_434540(eax_50.b, &var_300c, var_300c, "KOE=")
                                        
                                        if (eax_57 != 0)
                                            int32_t eax_64 =
                                                sub_434540(eax_57.b, &var_300c, var_300c, "PCM=")
                                            
                                            if (eax_64 != 0)
                                                int32_t eax_71 =
                                                    sub_434540(eax_64.b, &var_300c, var_300c, "SE=")
                                                
                                                if (eax_71 != 0)
                                                    int32_t eax_78 = sub_434540(eax_71.b, 
                                                        &var_300c, var_300c, "PAGE=")
                                                    
                                                    if (eax_78 != 0)
                                                        if (sub_434540(eax_78.b, &var_300c, 
                                                                var_300c, "MSGBK=") != 0)
                                                            void* eax_93 = sub_4d11d0(&hWnd_2, 
                                                                &var_300c, var_300c, &hWnd_2)
                                                            
                                                            if (eax_93 == 0 && hWnd_2 u<= 9)
                                                                int32_t eax_94
                                                                int32_t ecx_67
                                                                eax_94, ecx_67 = sub_434540(eax_93.b, 
                                                                    &var_300c, var_300c, "="")
                                                                
                                                                if (eax_94 == 0)
                                                                    int32_t var_10_31 = ecx_67
                                                                    
                                                                    if (sub_4d1140(&var_1008, &var_300c, 
                                                                            var_300c, &var_1008, 0x1000) == 0)
                                                                        void* eax_98 = hWnd_2 * 5
                                                                        sub_4cfdf0(eax_98, &var_1008, 
                                                                            edi_6 * 0x1bc + (eax_98 << 3)
                                                                                + 0x12a2dc8, 
                                                                            0x28)
                                                                        *arg2 = eax_93
                                                                        *hWnd_5 = var_300c
                                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                        return 0
                                                        else if (edi_6 == 0x17)
                                                            void* eax_87 = sub_4d11d0(&var_3008, 
                                                                &var_300c, var_300c, &var_3008)
                                                            
                                                            if (eax_87 == 0)
                                                                data_12ff374 = var_3008
                                                                *arg2 = eax_87
                                                                *hWnd_5 = var_300c
                                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                                return 0
                                                    else if (edi_6 == 2)
                                                        void* eax_80 = sub_4d11d0(&var_3008, 
                                                            &var_300c, var_300c, &var_3008)
                                                        
                                                        if (eax_80 == 0)
                                                            data_12ff370 = var_3008
                                                            *arg2 = eax_80
                                                            *hWnd_5 = var_300c
                                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                                            return 0
                                                else if (edi_6 == 4)
                                                    void* eax_73 = sub_4d11d0(&var_3008, &var_300c, 
                                                        var_300c, &var_3008)
                                                    
                                                    if (eax_73 == 0)
                                                        data_12a2944 = var_3008
                                                        *arg2 = eax_73
                                                        *hWnd_5 = var_300c
                                                        sub_5f02dd(arg1 ^ &__saved_ebp)
                                                        return 0
                                            else if (edi_6 == 4)
                                                void* eax_66 = sub_4d11d0(&var_3008, &var_300c, 
                                                    var_300c, &var_3008)
                                                
                                                if (eax_66 == 0)
                                                    data_12a2940 = var_3008
                                                    *arg2 = eax_66
                                                    *hWnd_5 = var_300c
                                                    sub_5f02dd(arg1 ^ &__saved_ebp)
                                                    return 0
                                        else if (edi_6 == 4)
                                            void* eax_59 = sub_4d11d0(&var_3008, &var_300c, 
                                                var_300c, &var_3008)
                                            
                                            if (eax_59 == 0)
                                                data_12a293c = var_3008
                                                *arg2 = eax_59
                                                *hWnd_5 = var_300c
                                                sub_5f02dd(arg1 ^ &__saved_ebp)
                                                return 0
                                    else if (edi_6 == 4)
                                        void* eax_52 =
                                            sub_4d11d0(&var_3008, &var_300c, var_300c, &var_3008)
                                        
                                        if (eax_52 == 0)
                                            data_12a2938 = var_3008
                                            *arg2 = eax_52
                                            *hWnd_5 = var_300c
                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                            return 0
                            else
                                char* eax_41
                                eax_41.b = *var_300c
                                
                                if (eax_41.b == 0x55)
                                    hWnd_2 = 1
                                label_43ec9c:
                                    char* ecx_27 = &var_300c[1]
                                    char* var_10_13 = &data_614d78
                                    var_300c = ecx_27
                                    int32_t eax_42
                                    int32_t ecx_28
                                    eax_42, ecx_28 =
                                        sub_434540(eax_41.b, &var_300c, ecx_27, var_10_13)
                                    
                                    if (eax_42 == 0)
                                        int32_t var_10_14 = ecx_28
                                        void* eax_44 = sub_4d1140(&var_1008, &var_300c, var_300c, 
                                            &var_1008, 0x1000)
                                        
                                        if (eax_44 == 0)
                                            int32_t edi_7 = edi_6 * 0x1bc
                                            sub_4cfdf0(eax_44, &var_1008, edi_7 + &data_12a2da0, 
                                                0x28)
                                            *(edi_7 + &data_12a2d9c) = hWnd_2
                                            *arg2 = eax_39
                                            *hWnd_5 = var_300c
                                            sub_5f02dd(arg1 ^ &__saved_ebp)
                                            return 0
                                else
                                    if (eax_41.b == 0x4e)
                                    label_43ec62:
                                        hWnd_2 = nullptr
                                        goto label_43ec9c
                                    
                                    if (eax_41.b == 0x47)
                                        if (eax_41.b == 0x4e)
                                            goto label_43ec62
                                        
                                        char** hWnd_3 = hWnd_5
                                        
                                        if (eax_41.b == 0x47)
                                            hWnd_3 = 2
                                        
                                        hWnd_2 = hWnd_3
                                        goto label_43ec9c
                    
                    esi = 1
            else
                int32_t* var_10_9 = &var_3008
                var_300c = &ecx[0xd]
                void* eax_32 = sub_4d11d0(&var_3008, edx_5, &ecx[0xd], var_10_9)
                
                if (eax_32 == 0)
                    data_12a2d94 = var_3008
                    *arg2 = eax_32
                    *hWnd_5 = var_300c
                    sub_5f02dd(arg1 ^ &__saved_ebp)
                    return 0
                
                esi = 1
        else
            int32_t* var_10_7 = &var_3008
            var_300c = &ecx[0xc]
            void* eax_25 = sub_4d11d0(&var_3008, &var_300c, &ecx[0xc], var_10_7)
            
            if (eax_25 == 0)
                data_12a2d90 = var_3008
                *arg2 = eax_25
                *hWnd_5 = var_300c
                sub_5f02dd(arg1 ^ &__saved_ebp)
                return 0
            
            esi = 1
    else
        int32_t* var_10_5 = &var_3008
        var_300c = &ecx[0xc]
        void* eax_18 = sub_4d11d0(&var_3008, &var_300c, &ecx[0xc], var_10_5)
        
        if (eax_18 == 0)
            data_12a2d98 = var_3008
            *arg2 = eax_18
            *hWnd_5 = var_300c
            sub_5f02dd(arg1 ^ &__saved_ebp)
            return 0
        
        esi = 1
else
    int32_t* var_10_1 = &var_3010
    var_300c = &ecx[0xd]
    int32_t eax_6 = sub_4d11d0(&var_3010, &var_300c, &ecx[0xd], var_10_1)
    
    if (eax_6 == 0)
        int32_t edi_2 = var_3010
        
        if (edi_2 u<= 0xff)
            int32_t eax_7
            int32_t* ecx_3
            eax_7, ecx_3 = sub_434540(eax_6.b, &var_300c, var_300c, "=")
            
            if (eax_7 == 0)
                int32_t* var_10_3 = &var_3018
                void* eax_9 = sub_4d1280(&var_3008, &var_300c, var_300c, &var_3008, ecx_3)
                
                if (eax_9 == 0)
                    (&data_12a2990)[edi_2 * 2].b = var_3008.b
                    (&data_12a2990)[edi_2 * 2]:1.b = var_3004
                    (&data_12a2992)[edi_2 << 2] = var_3000
                    *((edi_2 << 2) + &data_12a2993) = 0xff
                    *arg2 = eax_9
                    *hWnd_5 = var_300c
                    sub_5f02dd(arg1 ^ &__saved_ebp)
                    return 0
    
    esi = 1
*arg2 = esi
*hWnd_5 = var_300c
sub_5f02dd(arg1 ^ &__saved_ebp)
return 0
