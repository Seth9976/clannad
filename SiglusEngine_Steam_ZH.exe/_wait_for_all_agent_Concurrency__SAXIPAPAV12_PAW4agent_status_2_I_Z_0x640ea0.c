// 函数: ?wait_for_all@agent@Concurrency@@SAXIPAPAV12@PAW4agent_status@2@I@Z
// 地址: 0x640ea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3688
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2f4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2f4
int32_t var_8_1 = 0

if (sub_629ab0(arg1) == 0)
    void* eax_4 = data_bac4a0
    *(eax_4 + 0x1eb) = 0x101
    *(eax_4 + 0x1ed) = 1

int32_t var_8_2 = 0xffffffff

if (*(data_bac4a0 + 0x1eb) == 0)
    int32_t var_8_3 = 6
    sub_65db30()
    *(arg1 + 0x4a79c) = 1
    int32_t var_8_4 = 0xffffffff

int16_t var_30
int32_t var_1c

while (true)
    void* edx_1 = data_bac454
    
    if (*(edx_1 + 4) == 0)
        break
    
    if (*(data_bac4a0 + 0x1eb) != 0)
        HWND hWnd = *(edx_1 + 4)
        
        if (hWnd != 0)
            SendMessageW(hWnd, 0x10, 0, 0)
    
    if (sub_641910() == 0)
        break
    
    void* edx_2 = data_bac454
    
    if (*(edx_2 + 4) != 0 && *(data_bac4a0 + 0x1eb) != 0)
        HWND hWnd_1 = *(edx_2 + 4)
        
        if (hWnd_1 != 0)
            SendMessageW(hWnd_1, 0x10, 0, 0)
    
    void* ecx
    void* eax_25
    
    do
        void* eax_11 = data_bac4a0
        ecx = eax_11 + 0x1eb
        
        if (*(eax_11 + 0x1eb) != 0)
            break
        
        int32_t var_8_5 = 0xd
        bool eax_12 = sub_621bb0(arg1)
        
        if (eax_12 != 0)
            eax_12 = sub_622ab0(arg1) != 0
        
        if (eax_12 == 0)
            int16_t var_90
            int16_t* eax_13 = sub_6b9ed0(&var_90)
            var_8_5.b = 0xe
            int16_t var_a8
            int16_t* lpText = sub_548cb0(eax_13, 0xaf7260, &var_a8, eax_13)
            PWSTR lpCaption = data_bac510 + 0x1c
            
            if (*(lpCaption + 0x14) u>= 8)
                lpCaption = *lpCaption
            
            if (*(lpText + 0x14) u>= 8)
                lpText = *lpText
            
            MessageBoxW(data_4ebe3ac, lpText, lpCaption, MB_ICONEXCLAMATION)
            void* eax_14 = data_bac4a0
            *(eax_14 + 0x1eb) = 0x101
            *(eax_14 + 0x1ed) = 1
            int32_t var_94
            
            if (var_94 u>= 8)
                j__free(var_a8.d)
            
            var_94 = 7
            int32_t var_98_1 = 0
            var_a8 = 0
            int32_t var_7c
            
            if (var_7c u>= 8)
                j__free(var_90.d)
            
            var_7c = 7
            int32_t var_80_1 = 0
            var_90 = 0
        
        int32_t var_8_6 = 0xffffffff
        void* eax_15 = data_bac4a0
        ecx = eax_15 + 0x1eb
        
        if (*(eax_15 + 0x1eb) != 0)
            break
        
        if (*(eax_15 + 0x198) != 0)
            int32_t var_8_7 = 0x14
            
            if (sub_610f20() == 0)
                int16_t* eax_17 = sub_6b9ed0(&var_30)
                var_8_7.b = 0x15
                int16_t var_c0
                int16_t* lpText_1 = sub_548cb0(eax_17, 0xaf72f0, &var_c0, eax_17)
                PWSTR lpCaption_1 = data_bac510 + 0x1c
                
                if (*(lpCaption_1 + 0x14) u>= 8)
                    lpCaption_1 = *lpCaption_1
                
                if (*(lpText_1 + 0x14) u>= 8)
                    lpText_1 = *lpText_1
                
                MessageBoxW(data_4ebe3ac, lpText_1, lpCaption_1, MB_ICONEXCLAMATION)
                void* eax_18 = data_bac4a0
                *(eax_18 + 0x1eb) = 0x101
                *(eax_18 + 0x1ed) = 1
                int32_t var_ac
                
                if (var_ac u>= 8)
                    j__free(var_c0.d)
                
                var_ac = 7
                int32_t var_b0_1 = 0
                var_c0 = 0
                
                if (var_1c u>= 8)
                    j__free(var_30.d)
                
                var_1c = 7
                int32_t var_20_1 = 0
                var_30 = 0
            
            int32_t var_8_8 = 0xffffffff
        
        void* eax_19 = data_bac4a0
        
        if (*(eax_19 + 0x1a8) == 3)
            int32_t* edx_3 = data_bac49c
            int32_t esi_1 = *(eax_19 + 0x1b8)
            int32_t ecx_9 = edx_3[1]
            int32_t eax_20 = edx_3[2]
            
            if (ecx_9 u>= eax_20)
                do
                    eax_20 += 0x400
                while (ecx_9 u>= eax_20)
                
                edx_3[2] = eax_20
                int32_t eax_23 =
                    HeapReAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, *edx_3, eax_20 << 2)
                edx_3 = data_bac49c
                *edx_3 = eax_23
            
            *(*edx_3 + (edx_3[1] << 2)) = esi_1
            edx_3[1] += 1
        
        eax_25 = data_bac4a0
        bool cond:3_1 = *(eax_25 + 0x1eb) != 0
        ecx = eax_25 + 0x1eb
        *(eax_25 + 0x1a8) = 0
        
        if (cond:3_1)
            break
    while (*(eax_25 + 0x199) == 0)
    void* edx_4 = data_bac454
    
    if (*(edx_4 + 4) != 0 && *ecx != 0)
        HWND hWnd_2 = *(edx_4 + 4)
        
        if (hWnd_2 != 0)
            SendMessageW(hWnd_2, 0x10, 0, 0)
    
    if (*(data_bac4a0 + 0x1eb) == 0)
        HWND hWnd_3 = *(data_bac454 + 4)
        
        if (hWnd_3 != 0)
            InvalidateRect(hWnd_3, nullptr, 0)
        
        sub_613430()
        sub_683c20()
        int32_t eax_28 = data_4ecd1b4
        
        if ((eax_28.b & 1) == 0)
            data_4ecd1b4 = eax_28 | 1
            data_4ecd1b8 = timeGetTime()
        
        uint32_t eax_31 = timeGetTime()
        
        if (eax_31 - data_4ecd1b8 s>= 0x3e8)
            sub_687d70(sub_6a0b30())
            data_4ecd1b8 = eax_31
        
        int32_t eax_32 = sub_5cb350(data_bac468 + 0x3bc)
        
        if (eax_32 != 2 && eax_32 != 3 && IsIconic(data_4ebe3ac) == 0)
            if (*(data_bac4e4 + 0x194) == 0)
                continue
            else
                Sleep(0xa)
                continue
        
        Sleep(0x64)

int32_t var_8_9 = 0x1b

if (sub_62f5b0(arg1) == 0)
    int32_t var_48
    int16_t* eax_36 = sub_6b9ed0(&var_48)
    var_8_9.b = 0x1c
    int16_t* lpText_2 = sub_548cb0(eax_36, 0xaf7370, &var_30, eax_36)
    PWSTR lpCaption_2 = data_bac510 + 0x1c
    
    if (*(lpCaption_2 + 0x14) u>= 8)
        lpCaption_2 = *lpCaption_2
    
    if (*(lpText_2 + 0x14) u>= 8)
        lpText_2 = *lpText_2
    
    MessageBoxW(data_4ebe3ac, lpText_2, lpCaption_2, MB_ICONEXCLAMATION)
    void* eax_37 = data_bac4a0
    *(eax_37 + 0x1eb) = 0x101
    *(eax_37 + 0x1ed) = 1
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    int32_t var_20_2 = 0
    var_30 = 0
    int32_t var_34
    
    if (var_34 u>= 8)
        j__free(var_48)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 1
