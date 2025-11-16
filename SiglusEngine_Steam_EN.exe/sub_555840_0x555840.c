// 函数: sub_555840
// 地址: 0x555840
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
SendMessageA(GetDlgItem(data_20c2de4, 0x4f32), 0x1009, 0, 0)
int32_t result = data_12dc2b4
WPARAM wParam = 0
int32_t edx = 0
char var_409 = 0
void* ecx = &data_12c92b4
int32_t lParam_5
void var_408

if (result s> 0)
    do
        if (*ecx != 0)
            HWND hWnd = GetDlgItem(data_20c2de4, 0x4f32)
            int32_t lParam = 5
            int32_t var_578_1 = 0
            int32_t var_574_1 = 0
            int32_t var_568_1 = 0x620d38
            int32_t var_55c_1 = 0
            SendMessageA(hWnd, 0x1007, 0, &lParam)
            result = data_12dc2b4
            int32_t ecx_1 = 0
            int32_t var_410_1 = 0
            wParam = 1
            
            if (result s> 0)
                void* edi_1 = &data_12c92fc
                
                do
                    if (*(edi_1 - 0x48) != 0)
                        HWND hWnd_1 = GetDlgItem(data_20c2de4, 0x4f32)
                        lParam_5 = 5
                        void* var_43c_1 = edi_1 - 0x47
                        WPARAM wParam_18 = wParam
                        int32_t var_448_1 = 0
                        WPARAM wParam_22 = wParam
                        SendMessageA(hWnd_1, 0x1007, 0, &lParam_5)
                        HWND hWnd_2 = GetDlgItem(data_20c2de4, 0x4f32)
                        int32_t lParam_2 = 5
                        WPARAM wParam_4 = wParam
                        int32_t var_4fc_1 = 1
                        void* var_4f0_1 = edi_1
                        WPARAM wParam_6 = wParam
                        SendMessageA(hWnd_2, 0x102e, wParam, &lParam_2)
                        int32_t var_588_4 = *(edi_1 + 0x4c)
                        int32_t var_58c_5 = *(edi_1 + 0x48)
                        int32_t var_590_1 = *(edi_1 + 0x44)
                        sub_4c84d0(&var_408, "%d:%03d(%03d)")
                        HWND hWnd_3 = GetDlgItem(data_20c2de4, 0x4f32)
                        lParam_2 = 5
                        void* var_4f0_2 = &var_408
                        WPARAM wParam_5 = wParam
                        int32_t var_4fc_2 = 2
                        WPARAM wParam_7 = wParam
                        SendMessageA(hWnd_3, 0x102e, wParam, &lParam_2)
                        result = data_12dc2b4
                        wParam += 1
                        ecx_1 = var_410_1
                    
                    ecx_1 += 1
                    edi_1 += 0x98
                    var_410_1 = ecx_1
                while (ecx_1 s< result)
            
            var_409 = 1
            break
        
        edx += 1
        ecx += 0x98
    while (edx s< result)

char* ecx_3 = data_1bfdd4c
int32_t i = 0
int32_t lParam_3
int32_t lParam_4

if (data_1bfdd50 s> 0)
    do
        if (*ecx_3 == 0)
            if (var_409 != 0)
                HWND hWnd_4 = GetDlgItem(data_20c2de4, 0x4f32)
                lParam_5 = 5
                WPARAM wParam_19 = wParam
                int32_t var_448_2 = 0
                int32_t var_43c_2 = 0x620d10
                WPARAM wParam_23 = wParam
                SendMessageA(hWnd_4, 0x1007, 0, &lParam_5)
                wParam += 1
            
            HWND hWnd_5 = GetDlgItem(data_20c2de4, 0x4f32)
            lParam_4 = 5
            WPARAM wParam_12 = wParam
            int32_t var_484_1 = 0
            int32_t var_478_1 = 0x620d70
            WPARAM wParam_15 = wParam
            SendMessageA(hWnd_5, 0x1007, 0, &lParam_4)
            int32_t edx_1 = data_1bfdd50
            int32_t ecx_4 = 0
            char* eax_3 = data_1bfdd4c
            wParam += 1
            char* var_410_2 = eax_3
            int32_t var_414_1 = 0
            
            if (edx_1 s> 0)
                void* edi_2 = &eax_3[1]
                
                do
                    if (*eax_3 == 0)
                        HWND hWnd_6 = GetDlgItem(data_20c2de4, 0x4f32)
                        lParam_5 = 5
                        WPARAM wParam_20 = wParam
                        int32_t var_448_3 = 0
                        void* var_43c_3 = edi_2
                        WPARAM wParam_24 = wParam
                        SendMessageA(hWnd_6, 0x1007, 0, &lParam_5)
                        HWND hWnd_7 = GetDlgItem(data_20c2de4, 0x4f32)
                        lParam_3 = 5
                        WPARAM wParam_8 = wParam
                        int32_t var_4c0_1 = 1
                        void* var_4b4_1 = edi_2
                        WPARAM wParam_10 = wParam
                        SendMessageA(hWnd_7, 0x102e, wParam, &lParam_3)
                        edx_1 = data_1bfdd50
                        wParam += 1
                        eax_3 = var_410_2
                        ecx_4 = var_414_1
                    
                    ecx_4 += 1
                    eax_3 = &eax_3[0x98]
                    edi_2 += 0x98
                    var_410_2 = eax_3
                    var_414_1 = ecx_4
                while (ecx_4 s< edx_1)
            
            result = data_12dc2b4
            var_409 = 1
            break
        
        i += 1
        ecx_3 = &ecx_3[0x98]
    while (i s< data_1bfdd50)

int32_t edx_2 = 0
void* ecx_5 = &data_12c92b4

if (result s> 0)
    while (*ecx_5 != 0)
        edx_2 += 1
        ecx_5 += 0x98
        
        if (edx_2 s>= result)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return result
    
    if (var_409 != 0)
        HWND hWnd_8 = GetDlgItem(data_20c2de4, 0x4f32)
        lParam_5 = 5
        WPARAM wParam_21 = wParam
        int32_t var_448_4 = 0
        int32_t var_43c_4 = 0x620d10
        WPARAM wParam_25 = wParam
        SendMessageA(hWnd_8, 0x1007, 0, &lParam_5)
        wParam += 1
    
    HWND hWnd_9 = GetDlgItem(data_20c2de4, 0x4f32)
    int32_t lParam_1 = 5
    WPARAM wParam_2 = wParam
    int32_t var_538_1 = 0
    int32_t var_52c_1 = 0x620d98
    WPARAM wParam_3 = wParam
    SendMessageA(hWnd_9, 0x1007, 0, &lParam_1)
    int32_t ecx_8 = data_12dc2b4
    result = 0
    WPARAM wParam_1 = wParam + 1
    int32_t result_1 = 0
    
    if (ecx_8 s> 0)
        void* edi_3 = &data_12c92fc
        
        do
            if (*(edi_3 - 0x48) == 0)
                HWND hWnd_10 = GetDlgItem(data_20c2de4, 0x4f32)
                lParam_3 = 5
                void* var_4b4_2 = edi_3 - 0x47
                WPARAM wParam_9 = wParam_1
                int32_t var_4c0_2 = 0
                WPARAM wParam_11 = wParam_1
                SendMessageA(hWnd_10, 0x1007, 0, &lParam_3)
                HWND hWnd_11 = GetDlgItem(data_20c2de4, 0x4f32)
                lParam_4 = 5
                WPARAM wParam_13 = wParam_1
                int32_t var_484_2 = 1
                void* var_478_2 = edi_3
                WPARAM wParam_16 = wParam_1
                SendMessageA(hWnd_11, 0x102e, wParam_1, &lParam_4)
                int32_t var_588_14 = *(edi_3 + 0x4c)
                int32_t var_58c_18 = *(edi_3 + 0x48)
                int32_t var_590_2 = *(edi_3 + 0x44)
                sub_4c84d0(&var_408, "%d:%03d(%03d)")
                HWND hWnd_12 = GetDlgItem(data_20c2de4, 0x4f32)
                lParam_4 = 5
                void* var_478_3 = &var_408
                WPARAM wParam_14 = wParam_1
                int32_t var_484_3 = 2
                WPARAM wParam_17 = wParam_1
                SendMessageA(hWnd_12, 0x102e, wParam_1, &lParam_4)
                ecx_8 = data_12dc2b4
                wParam_1 += 1
                result = result_1
            
            result += 1
            edi_3 += 0x98
            result_1 = result
        while (result s< ecx_8)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
