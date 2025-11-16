// 函数: sub_4daba0
// 地址: 0x4daba0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi

if (arg6 == 0)
    int32_t* ebx_1 = arg5
    int32_t hWnd
    int32_t var_10
    
    if (arg2 == 0x14)
        int32_t eax_1 = 1
        bool cond:1_1 = arg1[0x1c] == 0
        *ebx_1 = 1
        
        if (cond:1_1)
            eax_1 = 0
        
        if (eax_1 != 0)
            return 1
    else
        int32_t eax_3
        bool cond:4_1
        
        if (arg2 != 0xf)
            if (arg2 == 5)
                var_10 = 1
                int32_t* var_24_2 = &var_10
                LPARAM var_28_1 = arg4
                int32_t* var_2c
                eax_3 = sub_4db490(arg1, hWnd, var_2c)
                goto label_4dac06
            
            if (arg2 == 0x21)
                var_10 = 1
                int32_t* var_24_3 = &var_10
                eax_3 = sub_4db2e0(arg1)
                goto label_4dac06
            
            if (arg2 == 7)
                int32_t eax_6 = arg1[0x26] | 0x20
                var_10 = 1
                arg1[0x26] = eax_6
                
                if ((eax_6.b & 0x40) != 0)
                    eax_3 = 0
                    cond:4_1 = true
                else
                    eax_3 = Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(
                        arg1, &var_10)
                    cond:4_1 = var_10 == 0
                
                goto label_4dac0b
            
            if (arg2 == 8)
                arg1[0x26] &= 0xffffffdf
                *ebx_1 = 0
        else
            var_10 = 1
            int32_t* var_24_1 = &var_10
            eax_3 = sub_4db600(arg1, hWnd)
        label_4dac06:
            cond:4_1 = var_10 == 0
        label_4dac0b:
            *ebx_1 = eax_3
            
            if (not(cond:4_1))
                return 1
    
    char edx_1 = (arg1[0x26]).b
    WPARAM ecx_1 = arg3
    
    if ((edx_1 & 8) != 0 && arg2 - 0x200 u<= 0xe)
        uint32_t eax_8 = zx.d(edx_1) & 0x10
        int32_t eax_9 = neg.d(eax_8)
        int32_t eax_11 = sbb.d(eax_9, eax_9, eax_8 != 0) & 3
        int32_t var_c = eax_11
        
        if (eax_11 != 0)
            goto label_4dad1b
        
        int32_t* ecx_2 = arg1[0x1c]
        
        if (ecx_2 != 0)
            hWnd = sx.d(arg4.w)
            (*(*ecx_2 + 0x30))(arg1[0x1c], 1, &arg1[0x2d], hWnd, sx.d((arg4 u>> 0x10).w), 0, &var_c)
            eax_11 = var_c
            ebx_1 = arg5
            ecx_1 = arg3
        label_4dad1b:
            
            if (eax_11 == 3)
                WPARAM var_2c_2
                LPARAM var_28_2
                int32_t* var_24_6
                
                if (arg2 != 0x200)
                    switch (arg2)
                        case 0x201
                            var_24_6 = &var_10
                            var_28_2 = arg4
                            var_2c_2 = ecx_1
                            hWnd = arg2
                            goto label_4dadf5
                        case 0x202
                            var_24_6 = &var_10
                            var_28_2 = arg4
                            var_2c_2 = ecx_1
                            hWnd = arg2
                            goto label_4dadf5
                        case 0x203
                            var_24_6 = &var_10
                            var_28_2 = arg4
                            var_2c_2 = ecx_1
                            hWnd = arg2
                            goto label_4dadf5
                        case 0x204
                            var_24_6 = &var_10
                            var_28_2 = arg4
                            var_2c_2 = ecx_1
                            hWnd = arg2
                            goto label_4dadf5
                        case 0x205
                            var_24_6 = &var_10
                            var_28_2 = arg4
                            var_2c_2 = ecx_1
                            hWnd = arg2
                            goto label_4dadf5
                        case 0x206
                            var_24_6 = &var_10
                            var_28_2 = arg4
                            var_2c_2 = ecx_1
                            hWnd = arg2
                            goto label_4dadf5
                        case 0x207
                            var_24_6 = &var_10
                            var_28_2 = arg4
                            var_2c_2 = ecx_1
                            hWnd = arg2
                            goto label_4dadf5
                        case 0x208
                            var_24_6 = &var_10
                            var_28_2 = arg4
                            var_2c_2 = ecx_1
                            hWnd = arg2
                            goto label_4dadf5
                        case 0x209
                            var_24_6 = &var_10
                            var_28_2 = arg4
                            var_2c_2 = ecx_1
                            hWnd = arg2
                            goto label_4dadf5
                else
                    var_24_6 = &var_10
                    var_28_2 = arg4
                    var_2c_2 = ecx_1
                    hWnd = arg2
                label_4dadf5:
                    var_10 = 1
                    void* eax_16 = sub_4db5a0(arg1, hWnd, var_2c_2, var_28_2, var_24_6)
                    bool cond:6_1 = var_10 != 0
                    *ebx_1 = eax_16
                    
                    if (cond:6_1)
                        return 1
    
    int32_t eax_17 = arg1[0x26]
    int32_t ecx_7 = eax_17 u>> 2 & eax_17
    
    if ((ecx_7.b & 8) == 0)
    label_4dafb2:
        
        if (arg2 == 2)
            int32_t* eax_35 = (*(*arg1 + 0x10))()
            (*(*eax_35 + 4))(eax_35)
            hWnd = arg1[1]
            CallWindowProcA(arg1[8], hWnd, arg2, arg3, arg4)
            ecx_7 = sub_4db140(arg1)
            *ebx_1 = 0
    else
        WPARAM var_2c_3
        LPARAM var_28_3
        int32_t* var_24_7
        
        if (arg2 != 0x100)
            switch (arg2)
                case 0x1f
                    var_24_7 = &var_10
                    var_28_3 = arg4
                    var_2c_3 = arg3
                    hWnd = arg2
                    goto label_4dae3c
                case 0x53
                    var_24_7 = &var_10
                    var_28_3 = arg4
                    var_2c_3 = arg3
                    hWnd = arg2
                    goto label_4dae3c
                case 0x101
                    var_24_7 = &var_10
                    var_28_3 = arg4
                    var_2c_3 = arg3
                    hWnd = arg2
                    goto label_4dae3c
                case 0x102
                    var_24_7 = &var_10
                    var_28_3 = arg4
                    var_2c_3 = arg3
                    hWnd = arg2
                    goto label_4dae3c
                case 0x103
                    var_24_7 = &var_10
                    var_28_3 = arg4
                    var_2c_3 = arg3
                    hWnd = arg2
                    goto label_4dae3c
                case 0x104
                    var_24_7 = &var_10
                    var_28_3 = arg4
                    var_2c_3 = arg3
                    hWnd = arg2
                    goto label_4dae3c
                case 0x105
                    var_24_7 = &var_10
                    var_28_3 = arg4
                    var_2c_3 = arg3
                    hWnd = arg2
                    goto label_4dae3c
                case 0x107
                    var_24_7 = &var_10
                    var_28_3 = arg4
                    var_2c_3 = arg3
                    hWnd = arg2
                    goto label_4dae3c
                case 0x209
                    var_24_7 = &var_10
                    var_28_3 = arg4
                    var_2c_3 = arg3
                    hWnd = arg2
                    goto label_4dae3c
                case 0x286
                    var_10 = 1
                    void* eax_30 = sub_4db540(arg1, arg2, arg3, arg4, &var_10)
                    bool cond:7_1 = var_10 == 0
                    *ebx_1 = eax_30
                    
                    if (not(cond:7_1))
                        return 1
                    
                    goto label_4daf8e
            
            if (arg2 u< 0x281 || arg2 u> 0x291)
                goto label_4dafb2
            
        label_4daf8e:
            var_10 = 1
            hWnd = arg2
            void* eax_33
            eax_33, ecx_7 = sub_4db540(arg1, hWnd, arg3, arg4, &var_10)
            bool cond:8_1 = var_10 != 0
            *ebx_1 = eax_33
            
            if (cond:8_1)
                return 1
            
            goto label_4dafb2
        
        var_24_7 = &var_10
        var_28_3 = arg4
        var_2c_3 = arg3
        hWnd = arg2
    label_4dae3c:
        var_10 = 1
        void* eax_19
        eax_19, ecx_7 = sub_4db540(arg1, hWnd, var_2c_3, var_28_3, var_24_7)
        bool cond:5_1 = var_10 == 0
        *ebx_1 = eax_19
        
        if (not(cond:5_1))
            return 1
    
    if ((arg1[0x32].b & 8) != 0)
        var_10 = 1
        hWnd = arg2
        LRESULT eax_36
        eax_36, ecx_7 = sub_4ddc00(arg1, hWnd, arg3, arg4, &var_10)
        bool cond:3_1 = var_10 != 0
        *ebx_1 = eax_36
        
        if (cond:3_1)
            return 1
    
    if (arg2 == data_20f33e0)
        int32_t* eax_38 = (*(*arg1 + 0x10))()
        (*(*eax_38 + 4))(eax_38)
        *ebx_1 = eax_38
        return 1
    
    if (arg2 == data_20f33dc)
        int32_t* esi_8 = arg1[0x18]
        
        if (esi_8 != 0)
            (*(*esi_8 + 4))(esi_8)
        
        *ebx_1 = esi_8
        return 1
    
    if (arg2 == 0x37f)
        int32_t var_24_15 = ecx_7
        LPARAM var_28_8 = arg4
        *ebx_1 = std::set_new_handler(arg1, hWnd)
        return 1

return 0
