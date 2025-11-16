// 函数: sub_431000
// 地址: 0x431000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t esi = arg2[1]
int32_t edi
int32_t var_14 = edi
char const* const var_1c_1

if (esi s> 0xa)
    if (esi s< 0xf)
    label_4312d4:
        int32_t var_18_11 = *arg2
        var_1c_1 = "ID3DXEffectCompiler: Unexpected value type of state '%s' (internal error)"
    label_4312db:
        int32_t var_20_3 = 0
        sub_42aba3(arg1 + 0x28, arg8, 0, var_1c_1)
        return 0x80004005
    
    if (esi s<= 0x10)
        if (arg6 != 0 || arg7 != 0)
            goto label_4312c9
        
        if ((esi != arg3 || arg4 != 1 || arg5 != 1) && (arg3 != 2 || arg4 != 1 || arg5 != 1))
            int32_t var_18_9 = *arg2
            var_1c_1 = "ID3DXEffectCompiler: State '%s' was assigned an incompatible type"
            goto label_4312c5
    else if (esi == 0xf20000)
        bool cond:2_1
        
        if (arg3 != 3)
            if (arg3 == 2)
            label_43127f:
                
                if (arg4 != 1)
                    goto label_431289
                
                goto label_431284
            
            if (arg3 == 1 && arg4 == 1)
            label_431284:
                cond:2_1 = arg5 == 1
                goto label_431287
            
        label_431289:
            int32_t var_18_8 = *arg2
            var_1c_1 = "ID3DXEffectCompiler: State '%s' must be assigned a numeric scalar or a 4-float vector"
            goto label_4312c5
        
        if (arg4 != 4)
            goto label_43127f
        
        cond:2_1 = arg5 == 1
    label_431287:
        
        if (not(cond:2_1))
            goto label_431289
    else
        if (esi != &data_f30000)
            goto label_4312d4
        
        if (arg6 != 0 || arg7 != 0)
            goto label_4312c9
        
        if (arg4 != 1 || arg5 != 1)
        label_431257:
            int32_t var_18_7 = *arg2
            var_1c_1 = "ID3DXEffectCompiler: State '%s' was not assigned a stateblock type"
            goto label_4312c5
        
        if (arg3 != &data_f30000 && arg3 != 2)
            goto label_431257
else if (esi == 0xa)
    if (arg6 != 0 || arg7 != 0)
    label_4312c9:
        int32_t var_18_10 = *arg2
        var_1c_1 = "ID3DXEffectCompiler: State '%s' cannot be assigned an array or structure"
        goto label_4312db
    
    if (arg4 != 1 || arg5 != 1)
    label_4311f2:
        int32_t var_18_6 = *arg2
        var_1c_1 = "ID3DXEffectCompiler: State '%s' was not assigned a sampler type"
    label_4312c5:
        int32_t var_20_2 = 0
        sub_42aba3(arg1 + 0x28, arg8, 0, var_1c_1)
        return 0x80004005
    
    if (arg3 != 0xa && arg3 != 0xb && arg3 != 0xc && arg3 != 0xd && arg3 != 0xe && arg3 != 2)
        goto label_4311f2
else
    if (esi s<= 0)
        goto label_4312d4
    
    if (esi s<= 2)
    label_43116b:
        
        if (arg7 == 0)
        label_431175:
            
            if (arg3 != 3 && arg3 != 2 && arg3 != 1)
                int32_t var_18_5 = *arg2
                var_1c_1 = "ID3DXEffectCompiler: State '%s' must be assigned a numeric value"
                goto label_4312c5
    else
        if (esi == 3)
            int32_t esi_2 = arg2[5]
            bool cond:3_1
            
            if (esi_2 u<= 0xd000004)
                if (esi_2 u>= 0xd000000)
                    goto label_43116b
                
                if (esi_2 u< 0xc000000)
                    if (arg2[2] != 1)
                        goto label_43116b
                    
                    goto label_431102
                
                if (esi_2 u<= 0xc000004 || esi_2 == 0xc010000)
                    goto label_43116b
                
                cond:3_1 = esi_2 == 0xc020000
                goto label_4310fb
            
            if (esi_2 == 0xd010000)
                goto label_43116b
            
            cond:3_1 = esi_2 == 0xd020000
        label_4310fb:
            
            if (cond:3_1 || arg2[2] != 1)
                goto label_43116b
            
        label_431102:
            int32_t esi_3 = arg2[3]
            
            if (esi_3 == 1)
                if (arg4 == 1 && arg5 == 1 && arg6 == 0 && arg7 == 0)
                    goto label_431175
                
                int32_t var_18_4 = *arg2
                var_1c_1 = "ID3DXEffectCompiler: State '%s' must be assigned a scalar"
                goto label_4312c5
            
            if (esi_3 u<= 2 || esi_3 u> 4)
                goto label_43116b
            
            if (arg5 == 1)
                if (arg4 != 3)
                    if (arg4 != 4 || arg6 != 0 || arg7 != 0)
                        goto label_43112f
                    
                    goto label_431175
                
                if (arg6 == 0 && arg7 == 0)
                    goto label_431175
            
        label_43112f:
            
            if (arg3 == 2 && arg4 == 1 && arg5 == 1)
                goto label_43116b
            
            int32_t var_18_3 = *arg2
            var_1c_1 = "ID3DXEffectCompiler: State '%s' must be assigned a 3-vector or a 4-vector or "
            "a uint scalar"
            goto label_4312c5
        
        if (esi != 5)
            goto label_4312d4
        
        if (arg6 != 0 || arg7 != 0)
            int32_t var_18_2 = *arg2
            var_1c_1 = "ID3DXEffectCompiler: State '%s' cannot be assigned an array or structure"
        label_4310a8:
            int32_t var_20_1 = 0
            sub_42aba3(arg1 + 0x28, arg8, 0, var_1c_1)
            return 0x80004005
        
        if (arg4 != 1 || arg5 != 1)
        label_431098:
            int32_t var_18_1 = *arg2
            var_1c_1 = "ID3DXEffectCompiler: State '%s' was not assigned a texture type"
            goto label_4310a8
        
        if (arg3 != 5 && arg3 != 6 && arg3 != 7 && arg3 != 8 && arg3 != 9 && arg3 != 2)
            goto label_431098
return 0
