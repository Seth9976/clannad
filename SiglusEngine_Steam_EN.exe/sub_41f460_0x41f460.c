// 函数: sub_41f460
// 地址: 0x41f460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg7
void* esi = arg8
*arg15 = esi
void* arg_1c
int32_t edi = arg_1c
*arg16 = edi
*arg17 = esi - 1 + ebx
*arg18 = edi - 1 + ebx
void* arg_14
void* ecx_2 = arg_14

if (ecx_2 == 0xffffffff)
    ecx_2 = ebx

int32_t* result
int32_t ecx_3
result, ecx_3 = sub_41f2b0(ecx_2)
arg7 = nullptr
arg8 = nullptr

if (result u<= 7 && ebx s> 0)
    void* eax_6 = result * 3
    int32_t var_1c_1 = ecx_3
    result = sub_426ad0(eax_6, arg6, &(&data_1357030)[eax_6 * 2], ebx, ebx, &arg7, &arg8, &arg_1c, 
        &arg_14)
    
    if (result.b != 0)
        void* ecx_5 = arg_1c
        void* ebx_1 = arg_14
        *arg15 = esi
        *arg16 = edi
        *arg17 = esi - 1 + ecx_5
        *arg18 = edi - 1 + ebx_1
        int32_t eax_13 = arg14
        
        if (eax_13 == 0xffffffff)
            eax_13 = data_131d2c8
        
        int32_t var_28_5
        int32_t var_24_5
        uint32_t var_20_5
        char var_1c_5
        
        if (eax_13 == 0 || eax_13 == 1)
            void* const edx_8
            edx_8.b = ebx_1 s> 0x10
            int32_t* edx_9 = edx_8 + 1
            
            if (arg3 != 0)
                if (arg13 == 0 && arg10 != 0 && eax_13 != 0)
                    sub_41f370(arg5, arg8, ecx_5, ebx_1, edx_9 + esi, edx_9 + edi, zx.d(*arg10), 
                        zx.d(arg10[1]), zx.d(arg10[2]), 0xff)
                    ecx_5 = arg_1c
                
                int32_t var_28_7
                int32_t var_24_7
                uint32_t var_20_7
                char var_1c_6
                
                if (arg9 == 0)
                    var_1c_6 = 0
                    var_20_7 = 0
                    var_24_7 = 0
                    var_28_7 = 0
                else
                    var_1c_6 = -1
                    var_20_7 = zx.d(arg9[2])
                    var_24_7 = zx.d(arg9[1])
                    var_28_7 = zx.d(*arg9)
                
                sub_41f370(arg5, arg8, ecx_5, ebx_1, esi, edi, var_28_7, var_24_7, var_20_7, 
                    var_1c_6)
                ecx_5 = arg_1c
            
            if (arg2 != 0)
                if (arg12 != 0 && eax_13 != 0)
                    sub_41f370(arg5, arg8, ecx_5, ebx_1, edx_9 + esi, edx_9 + edi, zx.d(*arg12), 
                        zx.d(arg12[1]), zx.d(arg12[2]), 0xff)
                
                if (arg13 == 0)
                    if (arg11 == 0)
                        var_1c_5 = 0
                        var_20_5 = 0
                        var_24_5 = 0
                        var_28_5 = 0
                    else
                        var_1c_5 = -1
                        var_20_5 = zx.d(arg11[2])
                        var_24_5 = zx.d(arg11[1])
                        var_28_5 = zx.d(*arg11)
                    
                    sub_41f370(arg5, arg8, arg_1c, ebx_1, esi, edi, var_28_5, var_24_5, var_20_5, 
                        var_1c_5)
        else
            void* edx_3 = arg5
            
            if (arg3 != 0)
                if (arg13 == 0 && arg10 != 0)
                    void* var_1c_2 = ecx_5
                    uint32_t var_20_2 = zx.d(arg10[2])
                    uint32_t eax_19 = zx.d(*arg10)
                    sub_41f3d0(eax_19, arg4, arg3, edx_3, arg8, ecx_5, ebx_1, esi, edi, eax_19, 
                        zx.d(arg10[1]))
                    ecx_5 = arg_1c
                    edx_3 = arg5
                
                int32_t var_28_3
                int32_t var_24_3
                uint32_t var_20_3
                char var_1c_3
                
                if (arg9 == 0)
                    var_1c_3 = 0
                    var_20_3 = 0
                    var_24_3 = 0
                    var_28_3 = 0
                else
                    var_1c_3 = -1
                    var_20_3 = zx.d(arg9[2])
                    var_24_3 = zx.d(arg9[1])
                    var_28_3 = zx.d(*arg9)
                
                sub_41f370(edx_3, arg8, ecx_5, ebx_1, esi + 1, edi + 1, var_28_3, var_24_3, 
                    var_20_3, var_1c_3)
                edx_3 = arg5
                ecx_5 = arg_1c
            
            if (arg2 != 0)
                if (arg12 != 0)
                    void* var_1c_4 = ecx_5
                    uint32_t var_20_4 = zx.d(arg12[2])
                    uint32_t eax_33 = zx.d(*arg12)
                    sub_41f3d0(eax_33, arg4, arg2, edx_3, arg8, ecx_5, ebx_1, esi, edi, eax_33, 
                        zx.d(arg12[1]))
                
                if (arg13 == 0)
                    if (arg11 == 0)
                        var_1c_5 = 0
                        var_20_5 = 0
                        var_24_5 = 0
                        var_28_5 = 0
                    else
                        var_1c_5 = -1
                        var_20_5 = zx.d(arg11[2])
                        var_24_5 = zx.d(arg11[1])
                        var_28_5 = zx.d(*arg11)
                    
                    sub_41f370(arg5, arg8, arg_1c, ebx_1, esi + 1, edi + 1, var_28_5, var_24_5, 
                        var_20_5, var_1c_5)
        return sub_4d6c40(&arg7, &arg8)

return result
