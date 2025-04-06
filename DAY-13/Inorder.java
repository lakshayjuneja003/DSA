class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> result = new ArrayList();
        inorder(root , result);
        return result;
    }
    public void inorder(TreeNode root , List<Integer> result){
        if(root == null){
            return ;
        }
        if(root.left != null){
            inorder(root.left , result);
        }
        result.add(root.val);
        if(root.right != null){
            inorder(root.right , result);
        }
    }
}