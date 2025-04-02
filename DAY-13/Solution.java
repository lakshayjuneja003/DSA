class Solution {
    public void postorder(TreeNode root , List<Integer> result){
        if(root == null){
            return ;
        }
        if(root.left != null){
            postorder(root.left , result);
        }
        
        if(root.right != null){
            postorder(root.right , result);
        }
        result.add(root.val);
    }
}