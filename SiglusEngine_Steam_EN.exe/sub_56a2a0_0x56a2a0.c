// 函数: sub_56a2a0
// 地址: 0x56a2a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* eax_2 = arg7
int32_t esi = 0
WPARAM wParam = arg2
int32_t* var_314 = eax_2
int32_t var_30c = 0
int32_t lParam
char var_208

if (data_20cf620 != 0)
    if (arg6 != 0xffffffff)
        int32_t var_374_3 = arg6
        sub_4c84d0(&var_208, "%03d")
    else
        int32_t eax_4 = data_1318c24
        
        if (eax_4 == 0)
            if (arg5 != 0)
                sub_4cfd70(&var_208, "    (")
            else
                int32_t var_374_2 = arg4
                sub_4c84d0(&var_208, "%03d ")
        else if (eax_4 - 1 u<= 1)
            int32_t var_374_1 = arg4
            char const* const var_378_1
            
            if (arg5 != 0)
                var_378_1 = "%03d "
            else
                var_378_1 = "%03d "
            
            sub_4c84d0(&var_208, var_378_1)
    
    HWND hWnd = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_1 = &var_208
    WPARAM wParam_1 = wParam
    int32_t var_348_1 = 0
    WPARAM wParam_45 = wParam
    SendMessageA(hWnd, 0x102e, wParam, &lParam)
    eax_2 = var_314
    esi = 1
    var_30c = 1

void var_308

if (data_20cf624 != 0)
    int32_t edx = eax_2[3]
    HWND hWnd_1
    
    if (edx != 0)
        void* const edx_1
        
        if (edx s< 0 || edx s>= 0xa)
            edx_1 = &data_619850
        else if (edx != 1 || arg8 == 0xffffffff)
            edx_1 = (&data_612b18)[edx]
        else
            edx_1 = &data_6141e8
        
        sub_4cfd70(&var_308, edx_1)
        
        if (var_314[0x18e] s>= 0)
            int32_t eax_7 = sub_4cfc80(&var_308)
            sub_4cfd70(&var_30c:3 + eax_7, 0x623a2c)
        
        hWnd_1 = GetDlgItem(arg3, 0x4f32)
        void* var_33c_3 = &var_308
    else
        hWnd_1 = GetDlgItem(arg3, 0x4f32)
        int32_t var_33c_2 = 0x6212a4
    
    lParam = 5
    WPARAM wParam_2 = wParam
    int32_t var_348_2 = esi
    WPARAM wParam_46 = wParam
    SendMessageA(hWnd_1, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf628 != 0)
    int32_t eax_8 = var_314[3]
    
    if (eax_8 == 0)
        var_208 = eax_8.b
    else if (var_314[0x1f] s>= 0)
        sub_4a7f60(var_314[0x1f], &var_308)
        
        if (var_314[3] != 1 || arg8 == 0xffffffff)
            void* var_374_7 = &var_308
            void* var_378_8 = &var_314[4]
            sub_4c84d0(&var_208, "%s (%s)")
        else
            void* var_374_6 = &var_314[0xd]
            void* var_378_7 = &var_308
            void* var_37c_2 = &var_314[4]
            sub_4c84d0(&var_208, "%s (%s)  [%s]")
    else if (eax_8 != 1 || arg8 == 0xffffffff)
        sub_4cfd70(&var_208, &var_314[4])
    else
        void* var_374_8 = &var_314[0xd]
        void* var_378_9 = &var_314[4]
        sub_4c84d0(&var_208, "%s  [%s]")
    
    HWND hWnd_2 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_4 = &var_208
    WPARAM wParam_3 = wParam
    int32_t var_348_3 = esi
    WPARAM wParam_47 = wParam
    SendMessageA(hWnd_2, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf62c != 0)
    int32_t ecx_12 = var_314[3]
    HWND hWnd_3
    
    if (ecx_12 != 0)
        switch (ecx_12)
            case 0
                sub_4cfd70(&var_208, &data_6138e3)
            case 1
                int32_t ecx_14 = var_314[0x92]
                
                if (ecx_14 s< 0 || ecx_14 s>= 0xb)
                    sub_4cfd70(&var_208, &data_619850)
                else if (ecx_14 == 1)
                    int32_t var_374_10 = 0x61a1c8
                    sub_4c84d0(&var_208, "%s")
                else if (ecx_14 == 0 || ecx_14 == 2 || ecx_14 == 3)
                label_56a6b1:
                    int32_t var_374_13 = 0x6239bc
                    sub_4c84d0(&var_208, "%s")
                else if (arg8 != 0xffffffff)
                    int32_t var_374_12 = (&data_612ccc)[ecx_14]
                    int32_t var_378_15 = var_314[0xa3]
                    sub_4c84d0(&var_208, "%03d : %s")
                else
                    int32_t var_374_11 = var_314[0xaf]
                    int32_t var_378_14 = (&data_612ccc)[ecx_14]
                    sub_4c84d0(&var_208, 0x623a50)
            case 2
                int32_t ecx_16 = var_314[0x92]
                
                if (ecx_16 s< 0 || ecx_16 s>= 0xb)
                    sub_4cfd70(&var_208, &data_619850)
                else if (ecx_16 != 1)
                    if (ecx_16 == 0 || ecx_16 == 3)
                        goto label_56a6b1
                    
                    int32_t var_374_15 = (&data_612ccc)[ecx_16]
                    int32_t var_378_16 = var_314[0x9f]
                    sub_4c84d0(&var_208, "%03d : %s")
                else
                    int32_t var_374_14 = 0x61a1c8
                    sub_4c84d0(&var_208, "%s")
            case 3
                int32_t var_374_16 = var_314[0x25]
                int32_t var_378_17 = var_314[0x24]
                int32_t var_37c_3 = var_314[0x23]
                int32_t var_380_8 = var_314[0x22]
                sub_4c84d0(&var_208, "%$d, %$d, %$d, %$d")
            case 4
                int32_t ecx_18 = *(arg10 + 0xc)
                
                if (ecx_18 == 0)
                    int32_t var_374_18 = var_314[0x2c]
                    int32_t var_378_19 = var_314[0x28]
                    sub_4c84d0(&var_208, "Size=%$d  Col=%$d")
                else
                    int32_t var_374_17 = ecx_18
                    int32_t var_378_18 = var_314[0x2c]
                    int32_t var_37c_4 = var_314[0x28]
                    sub_4c84d0(&var_208, "Size=%$d  Col=%$d  %s")
            case 5
                int32_t var_374_19 = var_314[0x42]
                int32_t var_378_20 = var_314[0x41]
                int32_t var_37c_5 = var_314[0x40]
                int32_t var_380_10 = var_314[0x3f]
                int32_t var_384_3 = var_314[0x3a]
                int32_t var_388_2 = var_314[0x36]
                sub_4c84d0(&var_208, "Cnt=%$d  Pat=%$d  Eria=%$d,%$d,%$d,%$d")
            case 6
                int32_t var_374_20 = var_314[0x2f]
                sub_4c84d0(&var_208, "%$d")
                void var_209
                void* esi_1 = &var_209 + sub_4cfc80(&var_208)
                int32_t var_380_11 = var_314[0x30]
                sub_4c84d0(esi_1, "  %!d")
                void* const edx_5 = &data_623acc
                void* eax_18 = sub_4cfc80(esi_1) + esi_1 - 1
                
                if (var_314[0x31] == 0)
                    edx_5 = &data_619bb8
                
                sub_4cfd70(eax_18, edx_5)
                char* edx_6 = &data_623ad0
                void* eax_20 = sub_4cfc80(eax_18) + eax_18 - 1
                
                if (var_314[0x32] == 0)
                    edx_6 = &data_619bb8
                
                sub_4cfd70(eax_20, edx_6)
                char* edx_7 = &data_623ad4
                void* eax_22 = sub_4cfc80(eax_20) + eax_20 - 1
                
                if (var_314[0x33] == 0)
                    edx_7 = &data_619bb8
                
                sub_4cfd70(eax_22, edx_7)
                int32_t var_374_21 = var_314[0x34]
                sub_4c84d0(sub_4cfc80(eax_22) + eax_22 - 1, " Xrep=%$d")
                esi = var_30c
            case 7
                int32_t eax_25 = data_1320e8c
                
                if (eax_25 == 0 || arg9 s< 0 || arg9 s>= data_1320e90)
                    sub_4cfd70(&var_208, 0x623af4)
                else
                    int32_t ecx_33 = arg9 * 0xa8 + eax_25
                    int32_t var_374_22 = ecx_33 + 0x78
                    int32_t var_378_21 = ecx_33 + 0x4b
                    int32_t var_37c_8 = ecx_33 + 0x27
                    sub_4c84d0(&var_208, "%s,  %s,  %s")
            case 8
                if (arg11 == 0)
                    sub_4cfd70(&var_208, 0x623b10)
                else if (arg11[2] == 0)
                    sub_4cfd70(&var_208, 0x623b04)
                else
                    int32_t var_374_23 = *arg11
                    sub_4c84d0(&var_208, "Cnt=%d")
            case 9
                int32_t var_374_24 = var_314[0x20]
                sub_4c84d0(&var_208, &data_623b18)
        
        hWnd_3 = GetDlgItem(arg3, 0x4f32)
        char* var_33c_6 = &var_208
    else
        hWnd_3 = GetDlgItem(arg3, 0x4f32)
        void* const var_33c_5 = &data_6138e3
    
    lParam = 5
    WPARAM wParam_4 = wParam
    int32_t var_348_4 = esi
    WPARAM wParam_48 = wParam
    SendMessageA(hWnd_3, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf630 != 0)
    int32_t ecx_37 = var_314[0x18e]
    
    if (ecx_37 s< 0)
        sub_4cfd70(&var_208, &data_6138e3)
    else
        int32_t var_374_26 = var_314[0x191]
        int32_t var_378_24 = var_314[0x190]
        int32_t var_37c_10 = var_314[0x18f]
        int32_t var_380_13 = ecx_37
        sub_4c84d0(&var_208, "Act=%$d  SE=%$d  GpNo=%$d  BtnNo=%$d")
    
    HWND hWnd_4 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_7 = &var_208
    WPARAM wParam_5 = wParam
    int32_t var_348_5 = esi
    WPARAM wParam_49 = wParam
    SendMessageA(hWnd_4, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf634 != 0)
    char* edx_8 = &data_614ef4
    
    if (*var_314 == 0)
        edx_8 = &data_614ef8
    
    sub_4cfd70(&var_208, edx_8)
    HWND hWnd_5 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_8 = &var_208
    WPARAM wParam_6 = wParam
    int32_t var_348_6 = esi
    WPARAM wParam_50 = wParam
    SendMessageA(hWnd_5, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf638 != 0)
    char* edx_9 = &data_614ef4
    
    if (var_314[1] == 0)
        edx_9 = &data_614ef8
    
    sub_4cfd70(&var_208, edx_9)
    HWND hWnd_6 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_9 = &var_208
    WPARAM wParam_7 = wParam
    int32_t var_348_7 = esi
    WPARAM wParam_51 = wParam
    SendMessageA(hWnd_6, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf63c != 0)
    int32_t ecx_41 = var_314[3]
    int32_t var_374_31
    
    if (ecx_41 == 1)
        if (arg8 != 0xffffffff)
            int32_t var_374_32 = var_314[0xa4]
            int32_t edx_10 = var_314[0x53]
            int32_t var_378_31 = var_314[0xa3]
            
            if (edx_10 == 0xffffffff)
                sub_4c84d0(&var_208, 0x623b94)
            else
                int32_t ecx_44 = var_314[0x21]
                
                if (ecx_44 != 0)
                    int32_t var_37c_13 = ecx_44
                    int32_t var_380_17 = edx_10
                    
                    if (ecx_44 s<= 0)
                        sub_4c84d0(&var_208, "%03d [%$d] (%03d, %03d)")
                    else
                        sub_4c84d0(&var_208, "%03d [+%$d] (%03d, %03d)")
                else
                    int32_t var_37c_12 = edx_10
                    sub_4c84d0(&var_208, "%03d (%03d, %03d)")
        else
            var_374_31 = var_314[0x53]
            sub_4c84d0(&var_208, "%03d")
    else if (ecx_41 != 2)
        var_374_31 = var_314[0x53]
        sub_4c84d0(&var_208, "%03d")
    else
        int32_t var_374_30 = var_314[0xa2]
        sub_4c84d0(&var_208, "%03d")
    HWND hWnd_7 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_10 = &var_208
    WPARAM wParam_8 = wParam
    int32_t var_348_8 = esi
    WPARAM wParam_52 = wParam
    SendMessageA(hWnd_7, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf640 != 0)
    HWND hWnd_8
    
    if (var_314[0x5e] == 0)
        hWnd_8 = GetDlgItem(arg3, 0x4f32)
        void* const var_33c_12 = &data_614614
    else
        hWnd_8 = GetDlgItem(arg3, 0x4f32)
        void* const var_33c_11 = &data_61460c
    
    lParam = 5
    WPARAM wParam_9 = wParam
    int32_t var_348_9 = esi
    WPARAM wParam_53 = wParam
    SendMessageA(hWnd_8, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf644 != 0)
    int32_t var_374_35 = *(arg12 + 4)
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_9 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_13 = &var_208
    WPARAM wParam_10 = wParam
    int32_t var_348_10 = esi
    WPARAM wParam_54 = wParam
    SendMessageA(hWnd_9, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf648 != 0)
    int32_t var_374_37 = var_314[0x6a]
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_10 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_14 = &var_208
    WPARAM wParam_11 = wParam
    int32_t var_348_11 = esi
    WPARAM wParam_55 = wParam
    SendMessageA(hWnd_10, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf64c != 0)
    int32_t var_374_39 = var_314[0x6b]
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_11 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_15 = &var_208
    WPARAM wParam_12 = wParam
    int32_t var_348_12 = esi
    WPARAM wParam_56 = wParam
    SendMessageA(hWnd_11, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf650 != 0)
    int32_t var_374_41 = var_314[0x6c]
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_12 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_16 = &var_208
    WPARAM wParam_13 = wParam
    int32_t var_348_13 = esi
    WPARAM wParam_57 = wParam
    SendMessageA(hWnd_12, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf654 != 0)
    int32_t var_374_43 = var_314[0x6f]
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_13 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_17 = &var_208
    WPARAM wParam_14 = wParam
    int32_t var_348_14 = esi
    WPARAM wParam_58 = wParam
    SendMessageA(hWnd_13, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf658 != 0)
    int32_t var_374_45 = var_314[0x55] + var_314[0x86] + var_314[0x85] + var_314[0x84]
        + var_314[0x83] + var_314[0x82] + var_314[0x81] + var_314[0x80] + var_314[0x7f]
        + var_314[0x69] + var_314[0x8f] + var_314[0x8a]
    int32_t var_378_46 = var_314[0x54] + var_314[0x7e] + var_314[0x7d] + var_314[0x7c]
        + var_314[0x7b] + var_314[0x7a] + var_314[0x79] + var_314[0x78] + var_314[0x77]
        + var_314[0x8e] + var_314[0x89]
    sub_4c84d0(&var_208, "%$d, %$d")
    HWND hWnd_14 = GetDlgItem(arg3, 0x4f32)
    int32_t esi_7 = var_30c
    char* var_33c_18 = &var_208
    lParam = 5
    WPARAM wParam_15 = wParam
    int32_t var_348_15 = esi_7
    WPARAM wParam_59 = wParam
    SendMessageA(hWnd_14, 0x102e, wParam, &lParam)
    esi = esi_7 + 1
    var_30c = esi

if (data_20cf65c != 0)
    int32_t var_374_47 = var_314[0x55]
    int32_t var_378_49 = var_314[0x54]
    sub_4c84d0(&var_208, "%$d, %$d")
    HWND hWnd_15 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_19 = &var_208
    WPARAM wParam_16 = wParam
    int32_t var_348_16 = esi
    WPARAM wParam_60 = wParam
    SendMessageA(hWnd_15, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf660 != 0)
    int32_t var_374_49 = var_314[0x69]
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_16 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_20 = &var_208
    WPARAM wParam_17 = wParam
    int32_t var_348_17 = esi
    WPARAM wParam_61 = wParam
    SendMessageA(hWnd_16, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf664 != 0)
    int32_t var_374_51 = var_314[0x8f] + var_314[0x8a]
    int32_t var_378_54 = var_314[0x8e] + var_314[0x89]
    sub_4c84d0(&var_208, "%$d, %$d")
    HWND hWnd_17 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_21 = &var_208
    WPARAM wParam_18 = wParam
    int32_t var_348_18 = esi
    WPARAM wParam_62 = wParam
    SendMessageA(hWnd_17, 0x102e, wParam, &lParam)
    esi += 1
    var_30c = esi

if (data_20cf668 != 0)
    int32_t var_374_53 = var_314[0x86] + var_314[0x85] + var_314[0x84] + var_314[0x83]
        + var_314[0x82] + var_314[0x81] + var_314[0x80] + var_314[0x7f]
    int32_t var_378_57 = var_314[0x7e] + var_314[0x7d] + var_314[0x7c] + var_314[0x7b]
        + var_314[0x7a] + var_314[0x79] + var_314[0x78] + var_314[0x77]
    sub_4c84d0(&var_208, "%$d, %$d")
    HWND hWnd_18 = GetDlgItem(arg3, 0x4f32)
    lParam = 5
    char* var_33c_22 = &var_208
    WPARAM wParam_19 = wParam
    int32_t var_348_19 = esi
    WPARAM wParam_63 = wParam
    SendMessageA(hWnd_18, 0x102e, wParam, &lParam)
    var_30c = esi + 1

int32_t i_3 = 8
LRESULT result = &var_314[0x77]
int32_t i_4 = 8
int32_t esi_9 = 0x13
LRESULT result_1 = result
int32_t i

do
    if ((&data_20cf620)[esi_9] != 0)
        int32_t var_374_55 = *(result + 0x20)
        int32_t var_378_60 = *result
        sub_4c84d0(&var_208, "%$d, %$d")
        HWND hWnd_19 = GetDlgItem(arg3, 0x4f32)
        int32_t var_348_20 = var_30c
        char* var_33c_23 = &var_208
        lParam = 5
        WPARAM wParam_20 = wParam
        WPARAM wParam_64 = wParam
        SendMessageA(hWnd_19, 0x102e, wParam, &lParam)
        var_30c += 1
        result = result_1
        i_3 = i_4
    
    result += 4
    esi_9 += 1
    i = i_3
    i_3 -= 1
    result_1 = result
    i_4 = i_3
while (i != 1)
char var_351

if ((&data_20cf620)[esi_9] != 0)
    int32_t var_374_57 = 0
    sub_4708d0(result, &var_351, &var_314[0x53], i_3, 0)
    uint32_t var_380_37 = zx.d(var_351)
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_20 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_21 = var_30c
    char* var_33c_24 = &var_208
    lParam = 5
    WPARAM wParam_21 = wParam
    WPARAM wParam_65 = wParam
    result, arg2 = SendMessageA(hWnd_20, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf624)[esi_9] != 0)
    uint32_t var_374_59 = zx.d(var_314[0x5d].b)
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_21 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_22 = var_30c
    char* var_33c_25 = &var_208
    lParam = 5
    WPARAM wParam_22 = wParam
    WPARAM wParam_66 = wParam
    result, arg2 = SendMessageA(hWnd_21, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf628)[esi_9] != 0)
    int32_t* eax_90 = var_314
    int32_t ecx_56 = 0xff
    int32_t var_358_2 = 0xff
    arg2.b = eax_90[0x8b].b
    
    if (arg2.b != 0xff)
        eax_90 = var_314
        ecx_56 = zx.d(arg2.b) * 0xff s/ 0xff
        var_358_2 = ecx_56
    
    arg2.b = eax_90[0x90].b
    
    if (arg2.b != 0xff)
        ecx_56 = zx.d(arg2.b) * var_358_2 s/ 0xff
    
    if (ecx_56 s< 0)
        ecx_56 = 0
    else if (ecx_56 s> 0xff)
        ecx_56 = 0xff
    
    uint32_t var_374_61 = zx.d(ecx_56.b)
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_22 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_23 = var_30c
    char* var_33c_26 = &var_208
    lParam = 5
    WPARAM wParam_23 = wParam
    WPARAM wParam_67 = wParam
    result = SendMessageA(hWnd_22, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf62c)[esi_9] != 0)
    sub_470780(&var_314[0x53], &var_351)
    uint32_t var_374_63 = zx.d(var_351)
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_23 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_24 = var_30c
    char* var_33c_27 = &var_208
    lParam = 5
    WPARAM wParam_24 = wParam
    WPARAM wParam_68 = wParam
    result = SendMessageA(hWnd_23, 0x102e, wParam, &lParam)
    var_30c += 1

int32_t esi_10 = esi_9 + 4
int32_t i_1 = 0
int32_t i_2 = 0

do
    if ((&data_20cf620)[esi_10] != 0)
        uint32_t var_374_65 = zx.d(*(var_314 + i_1 + 0x21c))
        sub_4c84d0(&var_208, "%$d")
        HWND hWnd_24 = GetDlgItem(arg3, 0x4f32)
        int32_t var_348_25 = var_30c
        char* var_33c_28 = &var_208
        lParam = 5
        WPARAM wParam_25 = wParam
        WPARAM wParam_69 = wParam
        result = SendMessageA(hWnd_24, 0x102e, wParam, &lParam)
        var_30c += 1
        i_1 = i_2
    
    i_1 += 1
    esi_10 += 1
    i_2 = i_1
while (i_1 s< 8)

if ((&data_20cf620)[esi_10] != 0)
    int32_t eax_99 = var_314[0x56]
    char* ecx_69
    char* edx_21
    
    if (eax_99 == 0)
        edx_21 = &data_62129c
        ecx_69 = &var_208
    else if (eax_99 == 1)
        edx_21 = &data_623ba8
        ecx_69 = &var_208
    else
        ecx_69 = &var_208
        
        if (eax_99 == 2)
            edx_21 = &data_623bb0
        else
            edx_21 = &data_623bb8
    
    sub_4cfd70(ecx_69, edx_21)
    HWND hWnd_25 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_26 = var_30c
    char* var_33c_29 = &var_208
    lParam = 5
    WPARAM wParam_26 = wParam
    WPARAM wParam_70 = wParam
    result = SendMessageA(hWnd_25, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf624)[esi_10] != 0)
    uint32_t var_374_68 = zx.d(var_314[0x57].b)
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_26 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_27 = var_30c
    char* var_33c_30 = &var_208
    lParam = 5
    WPARAM wParam_27 = wParam
    WPARAM wParam_71 = wParam
    result = SendMessageA(hWnd_26, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf628)[esi_10] != 0)
    uint32_t var_374_70 = zx.d(*(var_314 + 0x15d))
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_27 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_28 = var_30c
    char* var_33c_31 = &var_208
    lParam = 5
    WPARAM wParam_28 = wParam
    WPARAM wParam_72 = wParam
    result = SendMessageA(hWnd_27, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf62c)[esi_10] != 0)
    int32_t var_374_72 = var_314[0x5c]
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_28 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_29 = var_30c
    char* var_33c_32 = &var_208
    lParam = 5
    WPARAM wParam_29 = wParam
    WPARAM wParam_73 = wParam
    result = SendMessageA(hWnd_28, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf630)[esi_10] != 0)
    int32_t var_374_74 = var_314[0x5b]
    int32_t var_378_81 = var_314[0x5a]
    int32_t var_37c_28 = var_314[0x59]
    sub_4c84d0(&var_208, "%$d, %$d, %$d")
    HWND hWnd_29 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_30 = var_30c
    char* var_33c_33 = &var_208
    lParam = 5
    WPARAM wParam_30 = wParam
    WPARAM wParam_74 = wParam
    result = SendMessageA(hWnd_29, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf634)[esi_10] != 0)
    uint32_t var_374_76 = zx.d(*(var_314 + 0x161))
    uint32_t var_378_84 = zx.d(var_314[0x58].b)
    uint32_t var_37c_29 = zx.d(*(var_314 + 0x15f))
    uint32_t var_380_48 = zx.d(*(var_314 + 0x15e))
    sub_4c84d0(&var_208, "%$d, %$d, %$d : %$d")
    HWND hWnd_30 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_31 = var_30c
    char* var_33c_34 = &var_208
    lParam = 5
    WPARAM wParam_31 = wParam
    WPARAM wParam_75 = wParam
    result = SendMessageA(hWnd_30, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf638)[esi_10] != 0)
    int32_t var_374_78 = var_314[0x71]
    int32_t var_378_87 = var_314[0x70]
    sub_4c84d0(&var_208, "%$d, %$d")
    HWND hWnd_31 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_32 = var_30c
    char* var_33c_35 = &var_208
    lParam = 5
    WPARAM wParam_32 = wParam
    WPARAM wParam_76 = wParam
    result = SendMessageA(hWnd_31, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf63c)[esi_10] != 0)
    int32_t var_374_80 = var_314[0x73]
    int32_t var_378_90 = var_314[0x72]
    sub_4c84d0(&var_208, "%$d, %$d")
    HWND hWnd_32 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_33 = var_30c
    char* var_33c_36 = &var_208
    lParam = 5
    WPARAM wParam_33 = wParam
    WPARAM wParam_77 = wParam
    result = SendMessageA(hWnd_32, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf640)[esi_10] != 0)
    int32_t var_374_82 = var_314[0x75]
    int32_t var_378_93 = var_314[0x74]
    sub_4c84d0(&var_208, "%$d, %$d")
    HWND hWnd_33 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_34 = var_30c
    char* var_33c_37 = &var_208
    lParam = 5
    WPARAM wParam_34 = wParam
    WPARAM wParam_78 = wParam
    result = SendMessageA(hWnd_33, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf644)[esi_10] != 0)
    int32_t var_374_84 = var_314[0x76]
    sub_4c84d0(&var_208, "%$d")
    HWND hWnd_34 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_35 = var_30c
    char* var_33c_38 = &var_208
    lParam = 5
    WPARAM wParam_35 = wParam
    WPARAM wParam_79 = wParam
    result = SendMessageA(hWnd_34, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf648)[esi_10] != 0)
    int32_t var_374_86 = var_314[0x68]
    int32_t var_378_98 = var_314[0x67]
    sub_4c84d0(&var_208, "%$d, %$d")
    HWND hWnd_35 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_36 = var_30c
    char* var_33c_39 = &var_208
    lParam = 5
    WPARAM wParam_36 = wParam
    WPARAM wParam_80 = wParam
    result = SendMessageA(hWnd_35, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf64c)[esi_10] != 0)
    int32_t ecx_82 = var_314[0x5f]
    
    if (ecx_82 != 0xffffffff || var_314[0x60] != ecx_82 || var_314[0x61] != ecx_82
            || var_314[0x62] != ecx_82)
        int32_t var_374_88 = var_314[0x62]
        int32_t var_378_101 = var_314[0x61]
        int32_t var_37c_31 = var_314[0x60]
        int32_t var_380_59 = ecx_82
        sub_4c84d0(&var_208, "%$d, %$d, %$d, %$d")
    else
        sub_4cfd70(&var_208, 0x623bd4)
    
    HWND hWnd_36 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_37 = var_30c
    char* var_33c_40 = &var_208
    lParam = 5
    WPARAM wParam_37 = wParam
    WPARAM wParam_81 = wParam
    result = SendMessageA(hWnd_36, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf650)[esi_10] != 0)
    int32_t var_374_90 = *(arg12 + 8)
    sub_4c84d0(&var_208, "%d")
    HWND hWnd_37 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_38 = var_30c
    char* var_33c_41 = &var_208
    lParam = 5
    WPARAM wParam_38 = wParam
    WPARAM wParam_82 = wParam
    result = SendMessageA(hWnd_37, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf654)[esi_10] != 0)
    int32_t var_374_92 = *(arg12 + 0xc)
    sub_4c84d0(&var_208, "%d")
    HWND hWnd_38 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_39 = var_30c
    char* var_33c_42 = &var_208
    lParam = 5
    WPARAM wParam_39 = wParam
    WPARAM wParam_83 = wParam
    result = SendMessageA(hWnd_38, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf658)[esi_10] != 0)
    int32_t var_374_94 = *(arg12 + 0x10)
    sub_4c84d0(&var_208, "%d")
    HWND hWnd_39 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_40 = var_30c
    char* var_33c_43 = &var_208
    lParam = 5
    WPARAM wParam_40 = wParam
    WPARAM wParam_84 = wParam
    result = SendMessageA(hWnd_39, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf65c)[esi_10] != 0)
    int32_t var_374_96 = *(arg12 + 0x14)
    sub_4c84d0(&var_208, "%d")
    HWND hWnd_40 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_41 = var_30c
    char* var_33c_44 = &var_208
    lParam = 5
    WPARAM wParam_41 = wParam
    WPARAM wParam_85 = wParam
    result = SendMessageA(hWnd_40, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf660)[esi_10] != 0)
    int32_t var_374_98 = *(arg12 + 0x18)
    sub_4c84d0(&var_208, "%d")
    HWND hWnd_41 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_42 = var_30c
    char* var_33c_45 = &var_208
    lParam = 5
    WPARAM wParam_42 = wParam
    WPARAM wParam_86 = wParam
    result = SendMessageA(hWnd_41, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf664)[esi_10] != 0)
    int32_t var_374_100 = *(arg12 + 0x1c)
    sub_4c84d0(&var_208, "%d")
    HWND hWnd_42 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_43 = var_30c
    char* var_33c_46 = &var_208
    lParam = 5
    WPARAM wParam_43 = wParam
    WPARAM wParam_87 = wParam
    result = SendMessageA(hWnd_42, 0x102e, wParam, &lParam)
    var_30c += 1

if ((&data_20cf668)[esi_10] != 0)
    int32_t var_374_102 = *(arg12 + 0x20)
    sub_4c84d0(&var_208, "%d")
    HWND hWnd_43 = GetDlgItem(arg3, 0x4f32)
    int32_t var_348_44 = var_30c
    char* var_33c_47 = &var_208
    lParam = 5
    WPARAM wParam_44 = wParam
    WPARAM wParam_88 = wParam
    result = SendMessageA(hWnd_43, 0x102e, wParam, &lParam)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
